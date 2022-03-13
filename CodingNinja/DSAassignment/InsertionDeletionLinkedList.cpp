#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInput()
{
    int data;
    cout << "Enter data : ";
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        cout << "Enter data : ";
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void printIthNode(Node *head, int term)
{
    if (head == NULL)
        return;

    Node *tail = head;
    int indexOfTail = 0;
    while (tail != NULL)
    {
        if (indexOfTail == term)
        {
            cout << tail->data << endl;
            break;
        }
        else
        {
            tail = tail->next;
            indexOfTail++;
        }
    }
}

Node *insertNode(Node *head, int position, int data)
{
    // create a new node with desired data
    Node *newNode = new Node(data);
    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *temp = head;
    int count = 0;
    while (temp != NULL and count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *ans = temp->next;
        temp->next = newNode;
        newNode->next = ans;
    }

    return head;
}

Node *deleteNode(Node *head, int position)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *temp = head;

    if (position == 0)
    {
        head = head->next;
        delete temp;
        return head;
    }

    int count = 0;
    while (temp != NULL and count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL)
    {
        return head;
    }
    temp->next = temp->next->next;
    return head;
}

// iterative approach
// int length(Node *head)
// {
//     Node *temp = head;
//     if(head==NULL)
//     {
//         return 0;
//     }
//     int count=1;
//     while(temp!= NULL)
//     {
//         count++;
//     }
//     return count;
// }

// recursive approach
int lengthRecursive(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        return 0;
    }

    return 1 + lengthRecursive(temp->next);
}

Node *insertNode(Node *head, int position, int data)
{
    // base case
    if (head == NULL)
        return NULL;

    // small calculation
    if (position == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *ans = insertNode(head->next, position - 1, data);
    head->next = ans;
    return head;
}

int main()
{
    Node *head = takeInput();
    // print(head);
    // cout << "length of linked list : " << length(head) << "\n";
    // printIthNode(head, 3);
    // int i, data;
    // cout << "Enter position : ";
    // cin >> i;
    // cout<<"Enter data : ";
    // cin>>data;
    // head = insertNode(head,i, data);
    // print(head);
    // deleteNode(head, 2);
    // print(head);
    cout << lengthRecursive(head) << endl;
}