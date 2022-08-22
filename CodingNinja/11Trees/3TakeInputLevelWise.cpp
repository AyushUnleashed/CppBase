#include<iostream>
#include "TreeImplementation.h"
#include<queue>
using namespace std;

TreeNode<int>* takeInputLevelWise(){

    //Enter Root data
    int rootData;
    cout<<"\nEnter Root Node Data:";
    cin>>rootData;
    
    //make root node
    TreeNode<int>* root = new TreeNode<int> (rootData);

    queue<TreeNode<int>*> pendingNodes;

    //push root to pending nodes
    pendingNodes.push(root);


    while(pendingNodes.size()!=0){

        //get front of pending nodes
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        int childNum;
        cout<<"\nEnter no. of children of:"<<front->data<<endl;
        cin>>childNum;

        if(childNum>0)
            cout<<"\nEnter Data for Children of"<<front->data<<": \n";


        //Enter data for all childrens
        while(childNum--){
            int childData;
            cin>>childData;

            //make child node, push child node to queue and add it to children list of front
            TreeNode<int>* child = new TreeNode<int> (childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    // when no pending node, end loop, return tree;
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

    TreeNode<int>* root = takeInputLevelWise();

    cout<<"\nTree:\n";
    printTreeRecursive(root);

    return 0;
}
