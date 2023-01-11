#include <iostream>
#include <queue>
#include<bits/stdc++.h>

using namespace std;

template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode() {
    	if(left) 
       		delete left;
    	if(right) 
       		delete right;
    }
};

void markParents(
    BinaryTreeNode<int>* root,
    unordered_map<BinaryTreeNode<int> *, BinaryTreeNode<int> *> &parentMap) {
  // BFS traversal
  if (root == NULL)
    return;
  queue<BinaryTreeNode<int> *> pendingNodes;
  pendingNodes.push(root);
  while (pendingNodes.size() != 0) {
    //
    BinaryTreeNode<int> * curr = pendingNodes.front();
    pendingNodes.pop();

    if (curr->left) {
      pendingNodes.push(curr->left);
      parentMap[curr->left] = curr;
    }

    if (curr->right) {
      pendingNodes.push(curr->right);
      parentMap[curr->right] = curr;
    }
  }
}

    vector<int> distanceK(BinaryTreeNode<int> *root, BinaryTreeNode<int>* target,
                          int k) {
      vector<int> ans;
      if (root == NULL)
        return ans;
      unordered_map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> parentMap; // node -> parent
      markParents(root, parentMap);

      // BFS
      //  make visited hashmap
      unordered_map<BinaryTreeNode<int> *, bool> visited; // node -> isVisited

      queue<BinaryTreeNode<int> *> pendingNodes;
      pendingNodes.push(target);
      visited[target] = true;

      int dis = 0;
      while (pendingNodes.size() != 0) {

        if (dis == k)
          break;
        dis++;
        int size = pendingNodes.size();

        for (int i = 0; i < size; i++) {
          // front
          BinaryTreeNode<int>*curr = pendingNodes.front();
          pendingNodes.pop();
          // left
          if (curr->left && !visited[curr->left]) {
            visited[curr->left] = true;
            pendingNodes.push(curr->left);
          }
          // right
          if (curr->right && !visited[curr->right]) {
            visited[curr->right] = true;
            pendingNodes.push(curr->right);
          }
          // top
          if (parentMap[curr] && !visited[parentMap[curr]]) {
            visited[parentMap[curr]] = true;
            pendingNodes.push(parentMap[curr]);
          }
        }
      }

      int sz = pendingNodes.size();
      for (int i = 0; i < sz; i++) {
        BinaryTreeNode<int>*curr = pendingNodes.front();
        pendingNodes.pop();
        ans.push_back(curr->data);
      }

      return ans;
    }

    BinaryTreeNode<int> *findPointerToNode(BinaryTreeNode<int> *root, int node){
            BinaryTreeNode<int>* myNode=NULL;
            if(root==NULL) return NULL;
            if(root->data==node){
                return root;
            }
            //left
            BinaryTreeNode<int> * leftAns = findPointerToNode(root-> left,node);
            if(leftAns!=NULL) return leftAns;
            //right
            BinaryTreeNode<int> *rightAns = findPointerToNode(root->right, node);
            if(rightAns!=NULL) return rightAns;

            return myNode;
    }

void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
      // find pointer and give it
      BinaryTreeNode<int> * myNode = findPointerToNode(root, node);
      vector<int> ans = distanceK(root, myNode, k);

        for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<endl;
        }
    }


BinaryTreeNode<int>* takeInput() {
    int rootData;
    
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int targetNode, k;
    cin >> targetNode >> k;
    nodesAtDistanceK(root, targetNode, k);
    delete root;
}