#include<bits/stdc++.h>

using namespace std;

int lps(string s){
    int j = 0;
    vector<int> lps(s.size());
    lps[0] = 0;
    int j = 0;
    for(int i = 1;i< s.size();++i){
        if(s[i] == s[j]){
            j++;
            lps[i] = j;
        }else{
            if(j != 0){
                j = lps[j-1];
                lps[i] = j;
            }else{
                lps[i] = 0;
            }
        }
    }
    return lps[s.size()-1];
}

int bruteforce(string s,string sub){
    int n = s.size();
    int m = sub.size();

    for(int i = 0;i< n-m;++i){
        bool match = true;
        for(int j = 0;j<m;++j){
            if(s[i] != sub[j]){
                match = false;
             break;
            }
            if(match) return i;
        }
    }
    return -1;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    string s = "aaaaabbbcdddddbbajhdhduhdhddijiejoieeo";
    string sub = "bbcddddd";

    cout<<bruteforce(s,sub)<<endl;;
    return 0;
}