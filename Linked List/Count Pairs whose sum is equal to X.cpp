//Time - O(n+m)
//Space - O(n+m)

int countPairs(struct Node* head1, struct Node* head2, int x) {
        
        int count = 0;
        Node* ptr1 = head1;
        Node* ptr2 = head2;
        
        unordered_set<int> s;
        
        while( ptr1 ){
            s.insert( ptr1->data);
            ptr1 = ptr1->next;
        }
        
        while( ptr2 ){
            if( s.find( x - ptr2->data ) != s.end()){
                count++;
            }
            ptr2 = ptr2->next;
        }
        return count;
}
