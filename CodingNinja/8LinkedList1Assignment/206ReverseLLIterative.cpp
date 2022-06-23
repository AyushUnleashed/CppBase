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
 


// Iterative Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
	ListNode* prevNode = NULL;
	

	while(head!=NULL)
	{
        //get Next Node
        ListNode* nextNode = head ->next;
		// attaching backwards
		head->next = prevNode;

		// shifting previous Node ,Head to right by one  [ prevNode , Head, NextNode]
		prevNode = head;
		head = nextNode;
	}
	return prevNode;
    }
};