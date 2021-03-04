int countTriplets(Node* head, int x)
{
    Node* ptr, *ptr1, *ptr2;
    int count = 0;
 
    unordered_map<int, Node*> um;
 
    for (ptr = head; ptr != NULL; ptr = ptr->next)
        um[ptr->data] = ptr;
 
    for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
        for (ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next) 
		{
            int p_sum = ptr1->data + ptr2->data;
 
            if (um.find(x - p_sum) != um.end() && um[x - p_sum] != ptr1 && um[x - p_sum] != ptr2)
                count++;
        }
    // division by 3 as each triplet is counted 3 times
    return (count / 3);
}
