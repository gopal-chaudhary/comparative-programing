#include<bits/stdc++.h>

using namespace std;

void solve(vector<int>& arr){
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>> > pq;

    unordered_map<int,int> mp;
    for(auto &val : arr){
        mp[val]++;
    }
    for(auto &[k,v] : mp){
        pq.push({v,k});  
    }
    int j = 0;
    while(!pq.empty()){
        auto &[k,v] = pq.top();
        pq.pop();
        for(int i = 0;i< k;++i){
            arr[j] = v;
            ++j;
        }
    }
}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n ;
    cin>>n;
    vector<int> arr(n) ;
    for(auto & val : arr){
        cin>>val;
    }
    solve(arr);
    for(auto & val : arr){
        cout<<val<<" ";
    }
    
    return 0;
}