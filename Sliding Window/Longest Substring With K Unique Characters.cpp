//Brute Force
//Time - O(n*2)
//Space - O(n)

#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k){
    int i = 0, j = 0, maxl = -1;
    map<char, int> m;
    int n = s.size();
    while (i < n) {
        j = i;
        while (j < n) {
            char curchar = s[j];
            m[curchar] += 1;      // Incrementing current character count
            if (m.size() == k) 
                maxl = max(maxl, j - i + 1);
            if (m.size() > k) 
                break;
            j++;
        }
        i++;
    }
    return maxl;
}

//Sliding Window
//Time - O(n)
//Space - O(n)

int longestKSubstr(string s, int k) {
        int i=0, j=0, res=-1;
        unordered_map<char,int> ump;
        while(j<s.length()){
            ump[s[j]]++;
            if( ump.size() < k)
                j++;
            else if(ump.size() == k){
                res = max(res, j-i+1);
                j++;
            }
            else if(ump.size() > k){
                while(ump.size() > k){
                    ump[s[i]]--;
                    if( ump[s[i]] == 0)
                        ump.erase(s[i]);
                    i++;    
                }
                j++;
            }
        }
        return res;
    }
