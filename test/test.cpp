//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution {
    int convert(string& s) {
        int x = 0;
        for (char val : s) {
            x = x * 10 + (val - '0');
        }
        return x;
    }

    bool check(string f, string s, string t) {
        int x = convert(f);  
        int y = convert(s);  
        string sum = to_string(x + y); 
        if(t.size() < sum.size()) return false;

        if (t.substr(0, sum.size()) == sum) {
            cout<<f<<"+"<<s<<" = "<<t.substr(0, sum.size()) <<endl;
            return true;
        }
        
        return false;
    }

    bool solve(string start, string& s, int i) {
        if (i >= s.size()) return true;  
        
        string temp = "";  
        bool ans = false;
        for (int j = i; j < s.size(); ++j) {
            temp += s[j];
            ans = ans || ( check(start, temp, s.substr(j + 1)) && solve(temp, s, j + 1) );

        }
        return ans;
    }

public:
    bool isSumString(string& S) {
        int n = S.size();
        string temp = "";
        for (int i = 0; i < n - 1; ++i) {  
            temp += S[i];
            if (solve(temp, S, i + 1)) {
                return true; 
            }
        }
        return false; 
    }
};




//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.isSumString(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends