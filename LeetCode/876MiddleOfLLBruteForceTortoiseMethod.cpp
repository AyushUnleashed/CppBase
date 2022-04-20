#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//Two tortoise method
ListNode* middleNode(ListNode* head) 
{
    ListNode *slow=nullptr;
    ListNode *fast=nullptr;
    slow=head;
    fast=head;

    //slow move one step
    //fast move 2 steps
    // by the time fast to reach end, slow reaches middle

    //stop when fast is the last node [ fast->next ==nullptr] or [fast ==nullptr] exceeded

    while (  fast !=nullptr && fast->next!=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    //right now slow must be in middle

    return slow;
}

    int main()
    {

    }

