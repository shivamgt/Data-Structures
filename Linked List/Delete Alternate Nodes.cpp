//Time - O(n)
//Space - O(1)

void deleteAlt(struct Node *head){
    
    Node* ptr = head;
    while( ptr && ptr->next ){
        ptr->next = ptr->next->next;
        ptr = ptr->next;
    }
}
