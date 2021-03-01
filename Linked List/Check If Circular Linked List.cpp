bool isCircular(Node *head)
{
   // Your code here
   Node*ptr=head;
   
   if(head==NULL)
        return true;
   
   while(ptr)
   {
       if(ptr->next==head)
            return true;
        ptr=ptr->next;
   }
    return false;    
}
