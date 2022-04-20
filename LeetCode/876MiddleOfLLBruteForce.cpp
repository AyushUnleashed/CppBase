#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) 
{
    // get size of LL 

    ListNode* temp = nullptr;
    temp = head;

    int size = 0;
    while(temp!=nullptr)
    {
        size++;
        temp=temp->next;
    }

    if(size==1)
    {
        return head;
    }

    // got the size

    // for odd 5 -> 5/2 =2.5 -> 2 [int] return the next node [3rd]
    // for even 6 -> 6/2=3 -> 3 return the nexrt node [4th]

    ListNode* middle =nullptr;

    int midSize = size/2;
    temp = head;
    for(int i=1;i<=midSize;i++)
    {
        temp=temp->next;
        middle = temp;
    }
    
    return middle;
}

    int main()
    {

    }

