#include <iostream>
using namespace std;

template <typename T>
class Node {
   public:
    T data;
    Node<T>* next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};



template <typename T>
class Stack {
    
    Node<T>* head;
    int size;
	// Define the data members
   public:
    Stack() {
        head=NULL;
        size=0;
        // Implement the Constructor
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        
        return head==NULL;
        // Implement the isEmpty() function
    }

    void push(int element) {
        // Implement the push() function
    	
        Node<T>* newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    T pop() {
        // Implement the pop() function
        
        if(head==NULL)
        {
            return -1;
        }
        
        T poppedElement = head->data;
        Node<T> *temp = head;
        head=head->next;
        delete temp;
        size--;
        return poppedElement;
    }

    T top() {
        
        if(head==NULL)
        {
            return -1;
        }
        return head->data;
        // Implement the top() function
    }
};

// **************************************************************/



// **************************************************************/
int main() {
    Stack<int> st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}
