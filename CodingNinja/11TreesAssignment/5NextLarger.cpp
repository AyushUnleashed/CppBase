
#include <iostream>
#include <queue>
#include <vector>
#include<limits.h>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};



TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    
    if(root==NULL){
        return root;
    }
    
    TreeNode<int>* ans = NULL;
    
    if(root->data > x)
    {
        ans = root;
    }
    
    TreeNode<int>* minimumChildNode = new TreeNode<int>(INT_MAX) ;
        
    for(int i=0;i<root->children.size();i++){
       TreeNode<int>* childLargestNode= getNextLargerElement(root->children[i],x);
        if(childLargestNode==NULL){return NULL;}
        
        if(childLargestNode->data < minimumChildNode->data){
            minimumChildNode = childLargestNode;
        }
        
    }
    
    if(root->children.size()==0 && ans!=NULL){
        
        return ans;
        
    }else if(root->children.size()==0 && ans==NULL){
        
        return NULL;
    }
    
    if(ans==NULL){
        return minimumChildNode;
    }
    
    
    if(ans->data > minimumChildNode->data){
        return minimumChildNode;
    }else{
        return ans;
    }

}




TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();
    int x;
    cin >> x;
    TreeNode<int>* ans = getNextLargerElement(root, x);

    if (ans != NULL) {
        cout << ans->data;
    }
}