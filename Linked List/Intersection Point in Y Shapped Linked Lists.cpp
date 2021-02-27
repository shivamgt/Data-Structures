int intersectPoint(Node* head1, Node* head2)
{
    if(head1==NULL || head2==NULL)
        return -1;
    
    Node *d1=head1;
    Node *d2=head2;
   
   while(d1!=d2){
       d1=d1==NULL?head2:d1->next;
       d2=d2==NULL?head1:d2->next;
   }
   return d1->data;
}
