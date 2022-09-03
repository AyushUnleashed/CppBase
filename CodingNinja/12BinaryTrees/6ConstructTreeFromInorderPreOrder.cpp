#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    if(preLength==0 || inLength==0){
    	return NULL;
    }
    
    int rootD = preorder[0];
    int rootIndex=-1;
    
    for(int i=0;i<inLength;i++){
        if(rootD==inorder[i]){
            rootIndex=i;
            break;
        }
    }
    
    int leftLength = rootIndex;
    int rightLength= (inLength - rootIndex-1);
    
    int* leftInorder = inorder;
    int* rightInorder = inorder+rootIndex+1;
    
    int* leftPreorder = preorder+1;
    int* rightPreorder= preorder+1+leftLength;
    
    BinaryTreeNode<int>* leftSubTree = buildTree(leftPreorder,leftLength,leftInorder,leftLength);
    BinaryTreeNode<int>* rightSubTree = buildTree(rightPreorder,rightLength,rightInorder,rightLength);
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int> (rootD);
    
    root->left = leftSubTree;
    root->right=rightSubTree;
    
    return root;
    
}

BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

int main() {
    int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> pre[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(pre, size, in, size);
    printLevelATNewLine(root);
}