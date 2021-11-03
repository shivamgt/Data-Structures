//Time - O(n+m)
//Space - O(n)	
	
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        unordered_map<ListNode*,int> ump;
        
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;
        while(ptr1)
        {
            ump[ptr1]++;
            ptr1=ptr1->next;
        }
        while(ptr2)
        {
            if(ump[ptr2]>0)
                return ptr2;
            ptr2=ptr2->next;
        }
        return NULL;
    }

//Time - O(n+m)
//Space - O(n)	
	
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        stack<ListNode*> st1,st2;
        
        ListNode *ptr1= headA;
        ListNode *ptr2= headB;
        ListNode *last= NULL;
        
        if(headA==NULL || headB==NULL)
            return NULL;
        
        while(ptr1){
            st1.push(ptr1);
            ptr1=ptr1->next;
        }
        while(ptr2){
            st2.push(ptr2);
            ptr2=ptr2->next;
        }
        while(!st1.empty() && !st2.empty() && (st1.top()==st2.top()) ) 
        {
            last=st1.top();
            st1.pop();
            st2.pop();
        }
        return last;
    }
    
//Time - O(n+m)
//Space - O(1)

	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int count1=0;
        int count2=0;
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;
        
        while(ptr1)
        {
            count1++;
            ptr1=ptr1->next;
        }
        while(ptr2)
        {
            count2++;
            ptr2=ptr2->next;
        }
        
        int diff = abs(count1-count2);
        
        if(count1>count2)
        {
            while(diff)
            {
                headA=headA->next;
                diff--;
            }
        }
        else{
            while(diff)
            {
                headB=headB->next;
                diff--;
            }
        }
        
        while(headA && headB)
        {
            if(headA==headB )
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }    
    
//Time - O(n+m)
//Space - O(1)    
    
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if(headA==NULL || headB==NULL)
            return NULL;
        
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;
        
        while(ptr1 != ptr2)
        {
            ptr1 = ptr1 == NULL ? headB : ptr1->next;
            ptr2 = ptr2 == NULL ? headA : ptr2->next;
        }
        return ptr1;
    }    
