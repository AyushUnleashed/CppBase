#include <iostream>
#include <queue>
#include <vector>

using namespace std;


template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

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


vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
    vector<int>* ansVec = new vector<int>();
    
	if(root==NULL) return ansVec;
    
    if(root->data==data){
        
        ansVec->push_back(root->data);
        return ansVec;
        
    }else if(root->data>data){
        //leftSide
        
        if(root->left==NULL){
            return NULL;
        }
        vector<int>* leftAns = getPath(root->left,data);
        
        if(leftAns!=NULL){
            leftAns->push_back(root->data);
            return leftAns;
        }else{
            return NULL;
        }
            
    }else if(root->data<data){
        //right side
        if(root->right==NULL){
            return NULL;
        }
        vector<int>* rightAns = getPath(root->right,data);
        
        if(rightAns!=NULL){
            rightAns->push_back(root->data);
		}else{
            return NULL;
        }
        
        return rightAns;
    }
    
    
    return NULL;
    
    
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

int main() {
    BinaryTreeNode<int> *root = takeInput();
    int k;
    cin >> k;
    vector<int> *output = getPath(root, k);

    if (output != NULL) {
        for (int i = 0; i < output->size(); i++) {
            cout << output->at(i) << " ";
        }
    }

    delete root;
}