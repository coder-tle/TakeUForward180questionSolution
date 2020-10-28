#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	struct ListNode * next; 
};
int CountNode(ListNode* head)
{
	struct ListNode * temp ;
	temp = head;
	int count = 0;
	
	while(temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

ListNode* middleNode(ListNode* head) {
        int count = CountNode(head);
        int pos = (count / 2) + 1 ;
        
        int t = 1;
        struct ListNode * temp = head;
        while(t < pos)
        {
			temp = temp->next;
			t++;
		}
		return temp;
        
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
	struct ListNode *start = NULL, * temp, * middlenode;
	
	start = new ListNode;
	temp = start;
	
	temp->val = 10;
	//temp->next = NULL;
	
	temp->next = new ListNode;
	temp->next->val = 20;
	temp->next->next = NULL;
	temp->next->next = new ListNode;
	temp->next->next->val = 30;
	
	temp->next->next->next = new ListNode;
	temp->next->next->next->val = 40;
	
	temp->next->next->next->next = NULL; 
	
	
	middlenode = middleNode(start);
	cout<<"Middle node : "<<middlenode->val<<"\n";
	display(start);
	return 0;
	
	
}
