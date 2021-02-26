class Solution
{
    public:
    Node* addOne(Node *head) 
    {
       int flag=0;
       int count=0;
       
       Node *cur=head;
       Node *last=head;
       
       //Traversing the linked and reaching to the last element 
       while(cur){
           if(cur->data!=9){
               last=cur;
               count++;
           }
           else
               flag=1;
           cur=cur->next;       
       }
       //Last Node is not equal to nine
       if(flag==0){
           last->data++;
           return head;
       }
       //If the linked list contains only some 9's
       if(count!=0)
       {
           last->data++;
           last=last->next;
           while(last)
           {
               last->data=0;
               last=last->next;
           }
           return head;
       }
       //If all elements in the linked list is 9
       while(last)
       {
           last->data=0;
           last=last->next;
       }
       Node*t=new Node(1);
       t->next=head;
       head=t;
       return head;    
    }
