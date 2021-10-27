//Time - O(n)
//Space - O(1)

	ListNode* rotateRight(ListNode* head, int k) 
    {
        if(!head || !head->next || k==0)
            return head;
        
        int count = 1;
        ListNode *tail,*newHead;
        tail = newHead = head;
        
        while(tail->next)
        {
            tail=tail->next;
            count++;
        }
        tail->next = head;
        
        if( k %= count )
        {
            for(int i=0;i<count-k;i++)
            {
                tail=tail->next;
            }
        }
        newHead = tail->next;
        tail->next = NULL;
        
        return newHead;
    }
