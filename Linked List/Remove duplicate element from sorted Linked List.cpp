Node *removeDuplicates(Node *root)
{
 // your code goes here
  Node *p=root;
  while(p->next)
  {
      if(p->data==p->next->data)
      {
          p->next=p->next->next;
      }
      else
      {
          p=p->next;
      }
  }
  return root;
}
