struct node *reverse (struct node *head, int k)
{ 
   // Complete this method
    struct node *p=head;
    struct node *q=NULL;
    struct node *r=NULL;
    
    int count=0;
    
    while(p!=NULL && count<k)
    {
        q=p->next;
        p->next=r;
        r=p;
        p=q;
        count++;
    }
    if(head!=NULL)
    {
        head->next=reverse(q,k);
    }
    return r;
    
// kal=aaj->next;    q=p->next
// aaj->next=parso;  p->next=r
// parso=aaj;        r=p
// aaj=kal;          p=q

}
