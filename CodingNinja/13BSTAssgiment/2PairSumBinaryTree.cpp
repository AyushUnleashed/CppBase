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
};

vector<int> convertToInorder(BinaryTreeNode<int> *root){
        
        vector<int> finalAns;
        if(root==NULL){
            return finalAns;
        }
        
       
        vector<int> leftAns= convertToInorder(root->left);
        
        for(int i=0;i<leftAns.size();i++){
            finalAns.push_back(leftAns[i]);
        }
        
        finalAns.push_back(root->data);
        
        vector<int> rightAns = convertToInorder(root->right);
        
        for(int i=0;i<rightAns.size();i++){
            finalAns.push_back(rightAns[i]);
        }
        
        return finalAns;
        
    }

void pairSum(BinaryTreeNode<int> *root, int sum) {

    vector<int> ansIdx ;
     vector<int> inorder = convertToInorder(root);
        
        //Two Sum; first + second =k  // key, value -> val,index
        
        unordered_map<int,int> map;
        
        for(int i=0;i<inorder.size();i++){
            
            int first = inorder[i];
            int second = sum - first;
            
            if(map.find(second)!=map.end()){
                //we found the second element
              	if(first<second){
                    cout<<first<<" "<<second<<endl;
                }else{
                    cout<<second<<" "<<first<<endl;
                }
            }
            
            map[first]=i;
        }
        
       
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
    int sum;
    cin >> sum;
    pairSum(root, sum);
    delete root;
}

