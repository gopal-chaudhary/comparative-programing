#include<bits/stdc++.h>

using namespace std;
vector<int> find(vector<int> & arr){
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(),sorted_arr.end());
    int n = arr.size();
    int i = 0;
    for( i = 0;i< n;++i){
        if(sorted_arr[i] != arr[i]) break;
    }
    if(i == n) return 0;
    int j = n-1;
    for(;j>= 0;--j){
        if(sorted_arr[j] != arr[j]) break;
    }
    return j-i+1;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    vector<int> arr = {10,12,20,30,25,40,32,31,35,50,60};
    cout<<find(arr);
    return 0;
}