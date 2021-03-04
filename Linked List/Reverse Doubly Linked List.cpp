Node* reverseDLL(Node * head)
{
    //Your code here
    Node *cur=head;
    Node *temp=NULL;
    
    while(cur)
    {
        temp=cur->prev;
        cur->prev=cur->next;
        cur->next=temp;
        cur=cur->prev;
        
        if(temp!=NULL)
            head=temp->prev;
    }
    return head;
}
