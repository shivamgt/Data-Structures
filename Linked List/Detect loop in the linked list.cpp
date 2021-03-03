bool detectLoop(Node* head)
{
	if(!head)
		return false;
	unordered_map<Node*,int>ump;
	while(head)
	{
		if(!ump[head])
		{
			ump[head]=1;
			head=head->next;
		}
		else
			return true;
	}	
	return false;
}

