#include<iostream>
#include "BinaryTreeNode.h"
#include<queue>
#include<algorithm>
using namespace std;

//Input:
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1


int getHeight(BinaryTreeNode<int>* root){

    if(root==NULL){
        return 0;
    }

    int lHeight = getHeight(root->left);
    int rHeight = getHeight(root->right);

    return max(lHeight,rHeight)+1;
}


int diameterOfBT(BinaryTreeNode<int>* root){

    if(root==NULL) return 0;
    // if both nodes on different sides
    int ans1 = getHeight(root->left)+getHeight(root->right);
    int ans2 = diameterOfBT(root->left);
    int ans3 = diameterOfBT(root->right);

    return max(max(ans1,ans2),ans3);
}



void printTree(BinaryTreeNode<int>* root){

    if(root==NULL){
        return;
    }

    cout<<root->data<<":";

    if(root->left!=NULL)
        cout<<"L "<<root->left->data<<",";

    if(root->right!=NULL)
        cout<<"R "<<root->right->data<<",";

    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

//Using Queue

BinaryTreeNode<int>* takeInputLevelWise(){

    queue<BinaryTreeNode<int>*> pendingNodes;
    cout<<"\nEnter Data:";
    int data;
    cin>>data;

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(data);
    pendingNodes.push(root);

    while(pendingNodes.size()!=0){
        
        //got front 
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        //take input for left and right
        int leftData,rightData;

        cout<<"\nEnter Left Child of"<<front->data<<":";
        cin>>leftData;

        cout<<"\nEnter Right Child of"<<front->data<<":";
        cin>>rightData;

        if(leftData!=-1){
            BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftData); //make node
            pendingNodes.push(leftChild); // push to queue
            front->left = leftChild; // attach left 
        }

        if(rightData!=-1){
            BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightData);
            pendingNodes.push(rightChild);
            front->right = rightChild;
        }

    }

    return root;
}

int main(){

    BinaryTreeNode<int>* root = takeInputLevelWise();
    cout<<endl;
    printTree(root);
    cout<<"\nDiameter of BT:"<<diameterOfBT(root);
    delete root;
    return 0;
}