#include <iostream>
#include <queue>
#include<bits/stdc++.h>
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
        right = NULL;
    }

    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};

vector<pair<int,int>> pairs;

vector<int> convertToInorder(BinaryTreeNode<int> *root) {

  vector<int> finalAns;
  if (root == NULL) {
    return finalAns;
  }

  vector<int> leftAns = convertToInorder(root->left);

  for (int i = 0; i < leftAns.size(); i++) {
    finalAns.push_back(leftAns[i]);
  }

  finalAns.push_back(root->data);

  vector<int> rightAns = convertToInorder(root->right);

  for (int i = 0; i < rightAns.size(); i++) {
    finalAns.push_back(rightAns[i]);
  }

  return finalAns;
}

bool findTarget(BinaryTreeNode<int> *root, int k) {
  vector<int> inorder = convertToInorder(root);

  // Two Sum; first + second =k  // key, value -> val,index

  unordered_map<int, int> map;

  for (int i = 0; i < inorder.size(); i++) {

    int first = inorder[i];
    int second = k - first;

    if (map.find(second) != map.end()) {
      // we found the second element
        pair<int,int> currPair;
        if(first<second){
            currPair.first = first;
            currPair.second = second;
        }else{
            currPair.first = second;
            currPair.second = first;
        }

        pairs.push_back(currPair);
    }

    map[first] = i;
  }
}

void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    // Write your code here
   bool b =  findTarget(root,s);
   for(int i=0;i<pairs.size();i++){
       cout<<pairs[i].first<<" "<<pairs[i].second<<endl;
   }
}


BinaryTreeNode<int> *takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    int s;
    cin >> s;
    printNodesSumToS(root, s);
    delete root;
}