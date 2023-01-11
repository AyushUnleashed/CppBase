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

#include<vector>
vector<int> path;

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    if(root==NULL){
        return;
    }

    int rootData= root->data;
    path.push_back(root->data);
    if (root->left == NULL && root->right == NULL && root->data == k) {
      cout << endl;
      for (int i = 0; i < path.size(); i++) {
        cout << path[i] << " ";
      }
    }

    if(root->left!=NULL){
      rootToLeafPathsSumToK(root->left,k-rootData);
    }

    if (root->right != NULL) {
      rootToLeafPathsSumToK(root->right, k - rootData);
    }

    path.pop_back();
}


int main() {
    BinaryTreeNode<int>* root = takeInput();
    int k;
    cin >> k;
    rootToLeafPathsSumToK(root, k);
    delete root;
}