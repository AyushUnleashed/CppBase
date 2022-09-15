#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    
    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};


//efficient

 void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
     
     if(root==NULL) return;
     
     if(root->data<k1){
         // range on right side
         elementsInRangeK1K2(root->right,k1,k2);
     }
     else if(root->data>=k1 && root->data<=k2){
         
         elementsInRangeK1K2(root->left,k1,k2);
         cout<<root->data<<" ";
         elementsInRangeK1K2(root->right,k1,k2);
         
     }
     else if(root->data>k2){
         // range left side
         elementsInRangeK1K2(root->left,k1,k2);
     }
     
 }

// Need to traverse all the nodes of BST  (Inefficient)
void elementsInRangeK1K2InorderTraversal(BinaryTreeNode<int>* root, int k1, int k2) {
	//inorder Traversal -> sorted elements
    // if(node>=k1 && node<=k2) print
    
    if(root==NULL) return;
    
    elementsInRangeK1K2InorderTraversal(root->left,k1,k2);
    
    if(root->data >=k1 && root->data<=k2){
        cout<<root->data<<" ";
    }
    elementsInRangeK1K2InorderTraversal(root->right,k1,k2);
}




BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int k1, k2;
    cin >> k1 >> k2;
    elementsInRangeK1K2(root, k1, k2);
}