#include <iostream>
#include <queue>
#include<bits/stdc++.h>
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
    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};



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


#include<bits/stdc++.h>

int maxBSTHeight=0; 

class BSTHelper{
  public:
  int height;
  bool isBST;
  int maxOfBST;
  int minOfBST;

  BSTHelper(int height, bool isBST, int maxOfBST, int minOfBST){
    this->height = height;
    this->isBST = isBST;
    this->maxOfBST = maxOfBST;
    this->minOfBST = minOfBST;
  }

};

BSTHelper helper(BinaryTreeNode<int> *root) {

  if(root==NULL){
    return BSTHelper(0,true,INT_MIN,INT_MAX);
  }

  BSTHelper leftAns = helper(root->left);
  BSTHelper rightAns = helper(root->right);

  bool isLeftBST = leftAns.isBST;
  bool isRightBST = rightAns.isBST;

  
  int leftHeight = leftAns.height;
  int rightHeight = rightAns.height;

 

  int minOfRightBST = rightAns.minOfBST;
  int maxOfLeftBST = leftAns.maxOfBST;

  int finalHeight = 1 + max(leftHeight,rightHeight);

  int maxOfBST = max(root->data, max(leftAns.maxOfBST, rightAns.maxOfBST));
  int minOfBST = min(root->data, min(leftAns.minOfBST,rightAns.minOfBST));
  
  bool isFinalBST = false;

  if(leftAns.isBST && rightAns.isBST && root->data > maxOfLeftBST && root->data < minOfRightBST){
    isFinalBST = true;
  }else{
    isFinalBST = false;
  }

  if (isLeftBST && leftHeight > maxBSTHeight) {
    maxBSTHeight = leftHeight;
  }

  if (isRightBST && rightHeight > maxBSTHeight) {
    maxBSTHeight = rightHeight;
  }

  if(isFinalBST && finalHeight> maxBSTHeight){
    maxBSTHeight = finalHeight;
  }

  return BSTHelper(finalHeight,isFinalBST,maxOfBST,minOfBST);

}

int largestBSTSubtree(BinaryTreeNode<int> *root) {

  if(root==NULL){
    return 0;
  }

  BSTHelper b1 = helper(root);

  return maxBSTHeight;
}


int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << largestBSTSubtree(root);
    delete root;
}