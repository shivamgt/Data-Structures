//Time - O(2^n)
//Space - O(n)

class Solution
{
    void solve( int open, int close, string s, vector<string> &ans){
        //Base condition
        if( open == 0 && close == 0 ){
            ans.push_back(s);
            return;
        }
        if( open >= 0)
            solve( open-1, close, s+"(", ans);
        if( close > open )
            solve( open, close-1, s+")", ans);
    }
    public:
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        solve(n, n, "",ans);
        return ans;
    }
};
