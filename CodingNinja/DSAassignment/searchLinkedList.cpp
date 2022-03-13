// A program to merge two linked list and perform searching operation over the linked list
//Ayush Yadav
//0201IT201023
#include <iostream>
using namespace std;
 
class node
{
public:
    int data;
    node *next;
 
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
 
void insert_at_head(node *&head, int val)
{
    node *newnode = new node(val);
 
    if (head == NULL)
    {
        head = newnode;
        return;
    }
 
    node *temp = head;
    head = newnode;
    newnode->next = temp;
    return;
}
 
void insert_at_tail(node *&head, int val)
{
    node *newnode = new node(val);
 
    if (head == NULL)
    {
        head = newnode;
        head->next = NULL;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
}
 
void display(node *head)
{
    if (head == NULL)
        return;
 
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data << " -> NULL ";
    cout << endl;
}
 
// Merge two linked list
void merge_list(node *&head_1, node *&head_2)
{
    if (head_1 == NULL && head_2 == NULL)
    {
        return;
    }
    if (head_1 == NULL)
    {
        head_1 == head_2;
        return;
    }
    if (head_2 == NULL)
    {
        head_2 == head_1;
        return;
    }
    if (head_1 != NULL && head_2 != NULL)
    {
        node *temp = head_1;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head_2;
        return;
    }
}
 
int search(node *head_2, int val)
{
    if (head_2 == NULL)
    {
        cout << "Value not found";
        return 0;
    }
 
    node *temp = head_2;
    int count = 0;
    bool x = 0;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            x = 1;
            break;
        }
        ++count;
        temp = temp->next;
    }
 
    if (x == 1)
    {
        return count + 1;
    }
    else
        return 0;
}
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    node *head_1 = NULL; // 1st linked list
 
    for (int i = 0; i < n; i++)
    {
        insert_at_tail(head_1, arr[i]);
    }
 
    display(head_1);
 
    node *head_2 = NULL; // 2nd linked list
 
    for (int i = 0; i < n; i++)
    {
        insert_at_head(head_2, arr[i]);
    }
    display(head_2);
    cout << "Merged linked list is: ";
 
    merge_list(head_1, head_2);
    display(head_1);
 
    int val; // value to be searched in the linked list
    cin >> val;
    cout << "Value found at position: ";
    cout << search(head_2, val) << endl;
    return 0;
}