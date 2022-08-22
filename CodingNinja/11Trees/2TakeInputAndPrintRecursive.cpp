#include<iostream>
#include "TreeImplementation.h"
using namespace std;


TreeNode<int>* takeInput(){

    int inputData;
    cout<<"\nEnter Data:"<<endl;
    cin>>inputData;

    TreeNode<int>* root = new TreeNode<int>(inputData);

    int n;
    cout<<"\nEnter no. of children of "<<root->data<<":\n";
    cin>>n;

    for(int i=0;i<n;i++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }

    //base condition , n==0 , loop won't run

    return root;
}

void printTreeRecursive(TreeNode<int>* root){

    if(root==NULL){  //edge case
        return;
    }

    cout<<root->data<<":";

    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTreeRecursive(root->children[i]);
    }

    //base case of recursiom => root->children.size() == 0 
    //loop would not work

}

int main(){

    TreeNode<int>* root = takeInput();

    cout<<"\nTree:\n";
    printTreeRecursive(root);

    return 0;
}
