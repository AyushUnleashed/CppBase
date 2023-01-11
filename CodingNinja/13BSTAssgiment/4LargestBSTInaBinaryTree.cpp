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


int maxBSTHeight=0;

pair<pair<bool,int>,pair<int,int>> getIsBSTHeightMinMax(BinaryTreeNode<int> *root){


    if(root==NULL){

        pair<pair<bool,int>,pair<int,int>> p1 = {{true,0},{INT_MAX,INT_MIN}};
        return p1;
    }
    
    pair<pair<bool,int>,pair<int,int>> leftAns =   getIsBSTHeightMinMax(root->left);
    pair<pair<bool,int>,pair<int,int>> rightAns =   getIsBSTHeightMinMax(root->right);

    bool leftCheck =false;
    bool rightCheck=false;


    int  leftMinimum =  leftAns.second.first;
    int  rightMinimum=  rightAns.second.first;

    int leftMaximum = leftAns.second.second;
    int rightMaximum = rightAns.second.second;

    int leftHeight = leftAns.first.second;
    int rightHeight = rightAns.first.second;

    int finalMinimum =  min(root->data,min(leftMinimum, rightMinimum));

    int finalMaximum = max(root->data,max(leftMaximum,rightMaximum));

    int finalHeight = 1 + max(leftHeight,rightHeight);

    bool isLeftBST =leftAns.first.first;
    bool isRightBST = rightAns.first.first;

    if(isLeftBST && maxBSTHeight<leftHeight){
      maxBSTHeight=leftHeight;
    }

    if(isRightBST && maxBSTHeight< rightHeight){
      maxBSTHeight=rightHeight;
    }

    if(root->data > leftMaximum){
        leftCheck =true;
    }

    if(root->data<=rightMinimum){
        rightCheck =true;
    }

    bool isFinalBST = leftCheck && rightCheck && isLeftBST && isRightBST;

    pair<pair<bool,int>,pair<int,int>> finalOutput = {{isFinalBST,finalHeight},{finalMinimum,finalMaximum}};

    return finalOutput;
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {

  pair<pair<bool,int>,pair<int,int>> ans = getIsBSTHeightMinMax(root);
  if(ans.first.first == true){
    // if overall bst
    maxBSTHeight = 1+ maxBSTHeight;
  }

  return maxBSTHeight;
}


int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << largestBSTSubtree(root);
    delete root;
}