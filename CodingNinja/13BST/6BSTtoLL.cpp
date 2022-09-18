#include<iostream>
#include<vector>
#include<queue>
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
	};

	template <typename T>
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};

vector<int> inorderTraversal(BinaryTreeNode<int>* root) {
            vector<int> ans;
        if(root==NULL) return ans;
        
        vector<int> leftAns= inorderTraversal(root->left);
        ans.insert(ans.end(),leftAns.begin(),leftAns.end());
        
        ans.push_back(root->data);
        
        vector<int> rightAns = inorderTraversal(root->right);
        ans.insert(ans.end(),rightAns.begin(),rightAns.end());
        
        return ans;
    }



Node<int>* makeLL(vector<int> v){
    
    if(v.size()==0) return NULL;
    
    Node<int>* head=NULL;
    Node<int>* tail=NULL;
    for(int i=0;i<v.size();i++){
        
        Node<int>* newNode = new Node<int>(v[i]);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
        }
    }
    return head;
}



Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	
    // inorder traversal
    vector<int> inorderArray= inorderTraversal(root);
    
    Node<int>* head = makeLL(inorderArray);
    return head;

}





BinaryTreeNode<int>* takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    Node<int>* head = constructLinkedList(root);

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}