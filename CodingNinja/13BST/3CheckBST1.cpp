#include <iostream>
#include <queue>
#include<algorithm>
#include<limits.h>
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

int getMinimum(BinaryTreeNode<int> *root){
    if(root==NULL) return INT_MAX;
    
    int  leftAns =  getMinimum(root->left);
    int  rightAns =  getMinimum(root->right);
    return min(root->data,min(leftAns,rightAns));
}

int getMaximum(BinaryTreeNode<int> *root){
    if(root==NULL) return INT_MIN;
    
    int  leftAns =  getMaximum(root->left);
    int  rightAns =  getMaximum(root->right);
    return max(root->data,max(leftAns,rightAns));
}

bool isBST(BinaryTreeNode<int> *root) {
	
    if(root==NULL) return true;
    
    bool leftCheck = false;
    bool rightCheck=false;
    
    int leftMax = getMaximum(root->left);
    int rightMin = getMinimum(root->right);
    
    if(root->data>leftMax){
        leftCheck=true;
    }
    
    if(rightMin>=root->data){
        rightCheck=true;
    }
    
    
    
    bool leftAns = isBST(root->left);
    bool rightAns = isBST(root->right);
    
    if(leftAns && rightAns && leftCheck && rightCheck){
        return true;
    }else return false;
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
    cout << (isBST(root) ? "true" : "false");
}