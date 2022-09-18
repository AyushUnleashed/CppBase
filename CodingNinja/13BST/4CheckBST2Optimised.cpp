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

pair<bool,pair<int,int>> getIsBSTMinMax(BinaryTreeNode<int> *root){


    if(root==NULL){

        pair<bool,pair<int,int>> p1 = {true,{INT_MAX,INT_MIN}};
        return p1;
    }
    
    pair<bool,pair<int,int>> leftAns =  getIsBSTMinMax(root->left);
    pair<bool,pair<int,int>> rightAns =  getIsBSTMinMax(root->right);

    bool leftCheck =false;
    bool rightCheck=false;


    int  leftMinimum =  leftAns.second.first;
    int  rightMinimum=  rightAns.second.first;

    int leftMaximum = leftAns.second.second;
    int rightMaximum = rightAns.second.second;

    int finalMinimum =  min(root->data,min(leftMinimum, rightMinimum));

    int finalMaximum = max(root->data,max(leftMaximum,rightMaximum));

    bool isLeftBST =leftAns.first;
    bool isRightBST = rightAns.first;

    if(root->data > leftMaximum){
        leftCheck =true;
    }

    if(root->data<=rightMinimum){
        rightCheck =true;
    }

    bool isFinalBST = leftCheck && rightCheck && isLeftBST && isRightBST;

    pair<bool,pair<int,int>> finalOutput = {isFinalBST,{finalMinimum,finalMaximum}};

    return finalOutput;
}

bool isBST(BinaryTreeNode<int> *root) {
	return getIsBSTMinMax(root).first;
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