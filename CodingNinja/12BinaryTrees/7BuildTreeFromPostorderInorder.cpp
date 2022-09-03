#include <iostream>
#include <queue>
#include<BinaryTreeNode.h>
using namespace std;


BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    
    if(postLength==0 || inLength==0){
        return NULL;
    }
    
    int len = postLength;
    int rootData = postorder[len-1];
    
    //serach
    int rootIndex=-1;
    
    for(int i=0;i<len;i++){
        if(inorder[i]==rootData){
            rootIndex=i;
            break;
        }
    }
    
    int leftLength=rootIndex;
    int rightLength= len-rootIndex-1;
    
    BinaryTreeNode<int>* leftSubTree = buildTree(postorder,leftLength,inorder,leftLength);
    BinaryTreeNode<int>* rightSubTree = buildTree(postorder+leftLength,rightLength,inorder+leftLength+1,rightLength);
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left=leftSubTree;
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
    int *post = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> post[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(post, size, in, size);
    printLevelATNewLine(root);
}