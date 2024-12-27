#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n ,p,count=0;
    cin>>n>>p;
    int arr[n] ;
    for(int i = 0;i<n;++i){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int l = 0, r = n-1;

    while(l < r){
        if(arr[l]+arr[r] <=p){
            ++l;
            --r;
        }else{
            --r;
        }
        ++count;
    }
    if(l==r) ++count;
    cout<<count;


    return 0;
}