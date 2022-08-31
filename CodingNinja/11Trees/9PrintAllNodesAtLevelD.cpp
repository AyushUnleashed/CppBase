#include<iostream>
#include "TreeImplementation.h"
#include<queue>
using namespace std;


void printAllNodesAtLevelD(TreeNode<int>* root,int d){

    if(root==NULL){  //edge case
        return;
    }

    if(d==0){
        cout<<root->data<<",";
    }
    
    for(int i=0;i<root->children.size();i++){
       printAllNodesAtLevelD(root->children[i],d-1);
    }

    //base case of recursiom => root->children.size() == 0 
    //loop would not work
}


void printLevelWise(TreeNode<int>* root) {
   
    // we need FIFP so we use queue
    queue<TreeNode<int>*> pendingNodes;

    //push root node to queue;
    pendingNodes.push(root);
    

    //run till nothing is pending to print
    while(pendingNodes.size()!=0){
        
        // get the front of queue, this is the current node we need to print
        TreeNode<int>* front = pendingNodes.front();
        // pop it from queue as we are going to print it, to avoid printing it again
        pendingNodes.pop();
        
        cout<<front->data<<":"; //print nodes data
        
        int noOfChilds = front->children.size();
        
        // print data of all children 
        //and on next step we will print childrens so push them to queue

        for(int i=0;i<noOfChilds;i++){ // print all childrens of current node;
            cout<<front->children[i]->data;
            
            if(i!=noOfChilds-1){
                cout<<",";
            }
            pendingNodes.push(front->children[i]);
        }
        
        cout<<endl;
    }
    
}



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


int main(){

    TreeNode<int>* root = takeInputLevelWise();

    cout<<"\nTree:\n";
    printLevelWise(root);

    int d;
    cout<<"\nEnter Depth of node to print all nodes at that depth level";
    cin>>d;

    cout<<endl<<"All nodes at level d:"<<d<<endl;
    printAllNodesAtLevelD(root,d);

    return 0;
}


//Input:
/*
1
3
2 3 4
2
5 6
1
7 
2
8 9
0
0
0
0
0
2

*/

//Output:
/*

All nodes at level d:3
5,6,7,8,9,

*/