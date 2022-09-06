#include <iostream>
#include <queue>
#include <vector>
using namespace std;


template <typename T>
class Node {
   public:
    T data;
    Node<T> *next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

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
};


vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    
    if(root==NULL){
    
        vector<Node<int>*> emptyVector;
        emptyVector.push_back(NULL);
        return emptyVector;
    }
    
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    
    vector<Node<int>*> listOfHeads;
    
    
        Node<int>* currentHead = NULL;
        Node<int>* currentTail = NULL;
    
    while(pendingNodes.size()!=0){
        
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        

        if(front==NULL){ //if null encountered line has ended
            
            currentHead=NULL;
            currentTail=NULL;
            
            if(pendingNodes.size()!=0){
                pendingNodes.push(NULL);
            }
            
            //and create a new LL head->NULL && tail->NULL
            
        }else{
            
            Node<int>* newNode = new Node<int>(front->data); //creat a new node
            
            if(currentHead==NULL && currentTail==NULL){ // if first element
                currentHead=newNode;
                currentTail=newNode;
                
                listOfHeads.push_back(currentHead); // pass the head
            }else{
                
                currentTail->next = newNode;
                currentTail=currentTail->next;  //if other elements connect them
            }

            
            if(front->left!=NULL){
                pendingNodes.push(front->left); // normal traversal needs
            }
            
            if(front->right!=NULL){
                pendingNodes.push(front->right); // traversal needs
            }
            
        }
    }
    
    return listOfHeads;
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

void print(Node<int> *head) {
    Node<int> *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    vector<Node<int> *> ans = constructLinkedListForEachLevel(root);

    for (int i = 0; i < ans.size(); i++) {
        print(ans[i]);
    }
}