void rotate(Node* head, int N)
{
	Node*cur=head;
	int count=1;
	while(count<N && cur)
	{
		cur=cur->next;
		count++;
	}
	Node*temp=cur;
	while(cur)
		cur=cur->next;
	cur->next=head;
	head->prev=cur;
	head=temp->next;
	temp->next=NULL;
	head->prev=NULL;	
} 

