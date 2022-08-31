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



TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    
    
    if(root==NULL){
        return root;
    }
    
    TreeNode<int>* maxNode =root;
    
    queue<TreeNode<int>*> pendingNodes;
    
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        
        for(int i=0;i<front->children.size();i++){
            
            if(front->children[i]->data > maxNode->data){
                maxNode = front->children[i];
            }
            
            pendingNodes.push(front->children[i]);
        }
    }
    
    return maxNode;
    
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
    TreeNode<int>* ans = maxDataNode(root);

    if (root != NULL) {
        cout << ans->data;
    }
}