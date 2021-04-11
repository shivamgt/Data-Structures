	int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
        int n=S.size();
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='*' && S[i]!='/' && S[i]!='+' && S[i]!='-')
                st.push(S[i]-48);
            else
            {
                int y=st.top();
                st.pop();
                int x=st.top();
                st.pop();
                if(S[i]=='*')
                    st.push(x*y);
                else if(S[i]=='-')
                    st.push(x-y);
                else if(S[i]=='+')
                    st.push(x+y);
                else if(S[i]=='/')
                    st.push(x/y);    
            }
        }
        return st.top();
    }
