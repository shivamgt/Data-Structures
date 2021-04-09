char* reverse(char *S, int len)
{
    //code here
    stack<char> st;
    for(int i=0;i<len;i++)
        st.push(S[i]);
    for(int i=0;!st.empty();i++)
    {
        S[i]=st.top();
        st.pop();
    }
    return S;
}

