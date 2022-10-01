#include <iostream>
#include<limits.h>
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
        right = NULL;s
    }
};


class BST {
    // Define the data members
    BinaryTreeNode<int>* root;
    
	private:
    
    int minimumOfBST(BinaryTreeNode<int>* root){
        
        if(root==NULL){
            return INT_MAX;
        }
        
        if(root->left==NULL){
            return root->data;
        }else{
            return minimumOfBST(root->left);
        }
        
    }
    
  	BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key) {
        // 1 root==NULL return NULL
        //2  key< root , LeftSide , modify left and reattach, return root
        //3  root<key , right side , modify right and reattach, return root
        
        //4 root == key , need to delete  current root
        // 4a root->left==NULL && root->right == NULL  return NULL
        // 4b root->left==NULL || root->right == NULL  return the side which is not null
        // 4c root->left!=NULL && root->right!= NULL
        /* we find a replacement for root
         maximum of leftSubtree or minimum of right subtree can replace the root
        
        we find maximum of leftsubtree, 
        replace it with root, 
        delete the max for leftsubtree
        
        return the new root
        */
        
        
        if(root==NULL) return NULL; // if key doesn't exist this will eventually occur
        
        if(key<root->data){
            //leftside
            root->left = deleteNode(root->left,key);
            return root;
        }else if(root->data<key){
            //right side
            root->right = deleteNode(root->right,key);
            return root;
        }else if(root->data==key){
            //4
            
            if(root->left==NULL && root->right==NULL){
                return NULL;
            }else if(root->left==NULL && root->right!=NULL){
                return root->right;
            }else if(root->left!=NULL && root->right==NULL){
                return root->left;
            }else if(root->left!=NULL && root->right!=NULL){
                
                //last case
                int rightMin = minimumOfBST(root->right);
                root->data = rightMin;
                root->right = deleteNode(root->right,rightMin);
                
                return root;
                
            }
            
        }
        
        cout<<"This should not happen";
        return NULL;
    }
    
        BinaryTreeNode<int>* insertIntoBST(BinaryTreeNode<int>* root, int data) {
        // attach at the appropriate leaf node
        
        if(root==NULL){
            return new BinaryTreeNode<int>(data);
        }
        
        if(data<= root->data){
            //left side
            
            if(root->left==NULL)
                root->left = new BinaryTreeNode<int>(data);
            else   root->left = insertIntoBST(root->left,data);
    
    
        }else{
            //right side
                        
            if(root->right==NULL)
                root->right = new BinaryTreeNode<int>(data);
            else
                root->right = insertIntoBST(root->right,data);
            
        }
        
        return root;
    }
    
    bool searchData(BinaryTreeNode<int>* root,int data){
        // Implement the search() function 
        if(root==NULL){
            return false;
        }
        
        if(root->data == data){
            return true;
        }
        
        if(data<root->data){
            //left
        	return searchData(root->left,data);
    
        }else{
            //right
            return searchData(root->right,data);
        }
    }
    
    void printBST(BinaryTreeNode<int>* root){
        if(root==NULL) return;
        
        cout<<root->data<<":";
        
        if(root->left!=NULL){
            cout<<"L:"<<root->left->data<<",";
        }
        
        if(root->right!=NULL){
            cout<<"R:"<<root->right->data;
        }
        
        cout<<endl;
        printBST(root->left);
        printBST(root->right);
    }

    
   public:
    BST() { 
        // Implement the Constructor
        root=NULL;
    }

	/*----------------- Public Functions of BST -----------------*/
    
    void remove(int data) { 
        // Implement the remove() function
       root = deleteNode(root,data);
    }
    

    void print() { 
        // Implement the print() function
        printBST(root);
    }
    

    void insert(int data) { 
        root = insertIntoBST(root,data);    
    }
    
     
    bool search(int data) {
		return searchData(root,data);
    }
    

};


int main() {
    BST *tree = new BST();
    int choice, input, q;
    cin >> q;
    while (q--) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                tree->insert(input);
                break;
            case 2:
                cin >> input;
                tree->remove(input);
                break;
            case 3:
                cin >> input;
                cout << ((tree->search(input)) ? "true\n" : "false\n");
                break;
            default:
                tree->print();
                break;
        }
    }
}