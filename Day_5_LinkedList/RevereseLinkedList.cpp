#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	struct ListNode * next; 
};
ListNode* reverseList(ListNode* start) {
			if(start == NULL || start->next == NULL)
			return start;
			
			struct ListNode * curr , *HoldPrev, * HoldNext;
			curr = start;
			HoldPrev = NULL;
			
			while(curr != NULL)
			{
				HoldNext = curr->next;
				curr->next = HoldPrev;
				HoldPrev = curr;
				curr = HoldNext;
			}
			start = HoldPrev;
			return start;
    }
    
    
void display(struct ListNode * start)
{
	struct ListNode * temp;
	temp = start;
	
	while(temp != NULL)
	{
		cout<<temp->val<<" ";
		temp = temp->next;
		
	}
	cout<<endl;
}
int main()
{
	struct ListNode *start = NULL, * temp;
	
	start = new ListNode;
	temp = start;
	
	temp->val = 10;
	//temp->next = NULL;
	
	temp->next = new ListNode;
	temp->next->val = 20;
	temp->next->next = NULL;
	//temp->next->next = new ListNode;
	//temp->next->next->val = 30;
	
	//temp->next->next->next = new ListNode;
	//temp->next->next->next->val = 40;
	
	//temp->next->next->next->next = NULL; 
	display(start);
	
	start = reverseList(start);
	display(start);
	return 0;
	
	
}
