Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        unordered_set<int> seen;
        Node *cur=head;
        Node *prev=NULL;
        
        while(cur!=NULL)
        {
           if(seen.find(cur->data)!=seen.end())
           {
               prev->next=cur->next;
               delete(cur);
           }
           else{
               seen.insert(cur->data);
               prev=cur;
           }
           cur=cur->next;
        }
        return head;
    }
