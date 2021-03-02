bool isPalindrome(Node *head)
{
    //Your code here
    string str="";
    Node* ptr=head;
    while(ptr)
    {
        str.push_back(ptr->data);
        ptr=ptr->next;
    }
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]!=str[n-i-1])
            return false;
    }
    return true;
}
