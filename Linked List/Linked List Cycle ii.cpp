//Time - O(n)
//Space - O(n) 	
	 
	ListNode *detectCycle(ListNode *head) 
    {
        ListNode *res= NULL;
        
        if(head == NULL || head->next == NULL)
            return NULL;

        unordered_map<ListNode*,int> ump;
        
        while(head)
        {
            if(ump.count(head)>0)
                return head;
            ump[head]++;
            head=head->next;
        }
        return res;
    }
    
//Time - O(n)
//Space - O(1)

	ListNode *detectCycle(ListNode *head) 
    {
        ListNode *res= NULL;
        
        if(head == NULL || head->next == NULL)
            return NULL;
        
        ListNode* start = head;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow == fast)
            {
                while(slow!=start)
                {
                    slow=slow->next;
                    start=start->next;
                }
                return start;
            }
        }
        return res;
    }    
