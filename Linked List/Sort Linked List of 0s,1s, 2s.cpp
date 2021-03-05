Node* segregate(Node *head)
    {
        // Add code here
        int count0=0;
        int count1=0;
        int count2=0;
        Node *cur=head;
        while(cur)
        {
            if(cur->data==0)
                count0++;
            else if(cur->data==1)
                count1++;
            else if(cur->data==2)
                count2++;
            cur=cur->next;    
        }
        cur=head;
        while(cur)
        {
            if(count0!=0)
            {
                cur->data=0;
                count0--;
            }
            else if(count1!=0)
            {
                cur->data=1;
                count1--;
            }
            else if(count2!=0)
            {
                cur->data=2;
                count2--;
            }
            cur=cur->next;
        }
        return head;
    }
