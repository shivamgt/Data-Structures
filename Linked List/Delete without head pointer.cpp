class Solution
{
    public:
    void deleteNode(Node *del)
	{
       Node* temp = del->next;
       del->data = temp->data;
       del->next = temp->next;
       free(temp);
    }
};

