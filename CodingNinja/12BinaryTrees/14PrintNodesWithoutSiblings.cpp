#include <iostream>
#include <queue>
using namespace std;

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


    void helper(BinaryTreeNode<int> *root,bool haveSibling){
        if(root==NULL) return;

        if(haveSibling==false){ // if doesn't have sibling, print it
            cout<<root->data<<" ";    
        }
        if(root->left!=NULL && root->right!=NULL){ // if both are not null then they have sibling
            haveSibling=true;
        }else{
            haveSibling =false;
        }        

        helper(root->left,haveSibling);
        helper(root->right,haveSibling);
    }

    void printNodesWithoutSibling(BinaryTreeNode<int> *root) {

        helper(root,true); 
        //for first root node, we pass true because we don't want to print it
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
    printNodesWithoutSibling(root);
}