#include<bits/stdc++.h>


using namespace std;

/// vector<int> nums;

// int arr[10] = {122.3.3.4.44}
// arr +1

// sort(arr,arr+n);// (start address,end address)
sort(arr.begin(),arr.end());// (start address,end address,()=>)
// stack<int>

int main(){
    
    stack<int> st;
    queue<int> q;
    priority_queue<int>pq;
    unordered_map<int,int> map; // {},<key,val>
    st.push();
    q.push();
    pq.push();
    map[10]=9;

    st.pop();
    q.pop();
    pq.pop();
    
    st.top();
    q.front();
    q.front();
    
    st.empty();
    q.empty();
    
    return 0;
}