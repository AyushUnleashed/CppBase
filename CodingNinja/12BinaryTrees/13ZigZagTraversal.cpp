#include<stack>
#include<algorithm>
#include <iostream>
#include <queue>
using namespace std;

//Input: 8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
/* Output:
8 
10 3 
1 6 14 
13 7 4 
*/
template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};



int getHeight(BinaryTreeNode<int> *root){
    
    if(root==NULL) return 0;
	
    return 1+max(getHeight(root->left),getHeight(root->right));
}



void zigZagOrder(BinaryTreeNode<int> *root) {
    if(root==NULL) return;
    
    stack<BinaryTreeNode<int>*> s1;
    stack<BinaryTreeNode<int>*> s2;
    
    int level = getHeight(root);
    
    // first element in s1 , because we want l -> r, so we push opposite 
    // push in s1 RightToLeft
    // push in s2 LeftToRight
    // when pop()
    // print element, pop it , push child to other stack in other order
    // do until stack become empty 
    // stop when both the stacks are empty i guess
    
    s1.push(root);
    
    // do till atleast one has elements
    for(int i=1;i<=level;i++){
        
        if(i%2!=0){ //odd // 
            
            while(!s1.empty()){
                BinaryTreeNode<int>* node = s1.top();
                s1.pop();

                cout<<node->data<<" ";
                // add childs in s2 in left to right

                if(node->left!=NULL){
                    s2.push(node->left);
                }
                if(node->right!=NULL){
                    s2.push(node->right);
                }
            }
            
        }else{ //even
        
            while(!s2.empty()){
                BinaryTreeNode<int>* node = s2.top();
                s2.pop();

                cout<<node->data<<" ";
                // add childs in s1 in right to left

                if(node->right!=NULL){
                    s1.push(node->right);
                }
                if(node->left!=NULL){
                    s1.push(node->left);
                }
            }
        }
        cout<<endl;
    }
    
}



BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    zigZagOrder(root);
}