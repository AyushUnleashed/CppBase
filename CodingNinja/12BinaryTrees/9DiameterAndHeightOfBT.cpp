#include<iostream>
#include "BinaryTreeNode.h"
#include<queue>
#include<algorithm>
using namespace std;

//Input:
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1


pair<int,int> diameterAndHeightOfBT(BinaryTreeNode<int>* root){
    if(root==NULL){
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }

    pair<int,int> leftCall = diameterAndHeightOfBT(root->left);
    pair<int,int> rightCall = diameterAndHeightOfBT(root->right);


    int leftDiameter = leftCall.first;
    int rightDiamter = rightCall.first;

    int leftHeight = leftCall.second;
    int rightHeight = rightCall.second;

    int ans1 = leftHeight + rightHeight;

    int diameter = max(max(leftDiameter,rightDiamter),ans1);
    int height = 1+max(leftHeight,rightHeight);

    pair<int,int> p;
    p.first = diameter;
    p.second = height;

    return p;
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
    cout<<"\nDiameter of BT:"<<diameterAndHeightOfBT(root).first;
    cout<<"\nHeight of BT:"<<diameterAndHeightOfBT(root).second;
    delete root;
    return 0;
}