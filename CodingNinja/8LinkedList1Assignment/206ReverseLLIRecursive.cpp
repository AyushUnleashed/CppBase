#include<iostream>
using namespace std;



  //Definition for singly-linked list.
 struct ListNode {
    int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 


// Recursive Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
  
    if(head==NULL || head->next==NULL)
	{
		//for 0  or 1 element return itself
		return head;
	}

	ListNode* orignalHeadNextElement = head->next;

	//get head2; || Reversing Smaller LinkedList
	ListNode* head2 = reverseList(head->next);

	//after reverse of Small LinkedList we need to reverse this part also.

	// orignalHeadNextElement is last element of smaller Reversed LinkedList
	// we need to attach orignal head to last element of smaller Reversed LinkedList

	orignalHeadNextElement -> next = head;

	// head should point to null , becuase it is last element, after reverse

	head ->next = NULL;

	return head2;
  }
};