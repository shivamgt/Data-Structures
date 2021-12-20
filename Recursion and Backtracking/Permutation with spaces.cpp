 	void solve(string ip,string op,vector<string>&s)
    {
        if(ip.length()==0){
            s.push_back(op);
            return;
        }
        string op1=op;
        string op2=op;
        
        op1+=" ";
        op1.push_back(ip[0]);
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        
        solve(ip,op1,s);
        solve(ip,op2,s);
        return;
    }

    vector<string> permutation(string ip){
        // Code Here
        string op="";
        op.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        vector<string>s;
        solve(ip,op,s);
        return s;
    }
