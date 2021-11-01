//Time - O(n)
//Space - O(n) 	
	 
	Node* copyRandomList(Node* head) 
    {
        unordered_map<Node*,Node*> ump;
        Node* ptr = head;
        while(ptr)
        {
            ump[ptr] = new Node(ptr->val);
            ptr = ptr->next;
        }
        ptr = head;
        while(ptr)
        {
            ump[ptr]->next = ump[ptr->next];
            ump[ptr]->random = ump[ptr->random];
            ptr = ptr->next;
        }
        return ump[head];
    }
 
//Time - O(N)
//Space - O(1)

	Node* copyRandomList(Node* head) 
    {
        if(head==NULL)
            return NULL;
        
        Node* cur = head;
        
        //Insert the copy of node
        while(cur)
        {
            Node* temp = cur->next;
            cur->next = new Node(cur->val);
            cur->next->next = temp;
            cur = temp;
        }
        
        //Set the random pointers
        cur = head;
        while(cur)
        {
            if( cur->random )
                cur->next->random = cur->random->next;
            cur=cur->next->next;
        }
        
        //Seperate the original and copied linked list
        cur = head;
        Node* copy = head->next;
        Node* res = copy;
        while(copy)
        {
            cur->next = cur->next->next;
            cur=cur->next;
            
            copy->next = (copy->next)?copy->next->next:NULL;
            copy=copy->next;
        }
        return res;
    }    
