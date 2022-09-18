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


//start<root->data<=end

// left -> range [ _ , r-1]
//right -> range [r, _ ]

// if ans is not in range -> return false else continue
bool isBSTHelper(BinaryTreeNode<int> *root,int min,int max){
    if(root==NULL) return true;

    if(min>=root->data || root->data > max){
        
        return false;
    }
    
    bool ans1 = isBSTHelper(root->left,min,root->data-1);
    bool ans2 = isBSTHelper(root->right,root->data,max);

       

    return ans1&&ans2;
}

bool isBST(BinaryTreeNode<int> *root) {
	return isBSTHelper(root,INT_MIN,INT_MAX);

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