#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/

node *findKthFromLast(node *head, int k)
{
	node * prev=nullptr;
	node * curr = head;
	node *nxt = nullptr;
	while(curr!=nullptr){
		nxt= curr->next;
		curr->next=prev;
		prev=curr;
		curr = nxt; 
	}
 int count=0;
	while(prev!=nullptr){
		count++;
		if(count==k){
			return prev;
		}
		prev=prev->next;
	}
	return nullptr;
}
