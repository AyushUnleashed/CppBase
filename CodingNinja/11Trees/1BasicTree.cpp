#include<iostream>
#include "TreeImplementation.h"
using namespace std;

void printT(TreeNode<int>* root ){

   
    cout<<endl;
    cout<<root->data;

    int noOfChildren = root->children.size();
    for(int i=0;i<noOfChildren;i++){
        printT(root->children[i]);
    }

}

int main(){

    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* node1= new TreeNode<int>(2);
    TreeNode<int>* node2= new TreeNode<int>(3);

    //created 3 Tree nodes;

    // now we connect them

    root->children.push_back(node1);
    root->children.push_back(node2);


    //added node1 and node 2 as children of root

    cout<<"\nTree:";
    printT(root);

    return 0;
}
