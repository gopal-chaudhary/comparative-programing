#include<bits/stdc++.h>

using namespace std;
bool isPresent(vector<vector<int>>& arr,int val ,int n,int m){
    for(int i =1;i<n;i++){
        bool found = false;
        for(int j =0;j<n;j++){
            if(arr[i][j] == val){
                found = true;
                break;
            }
        }
        if(!found) return false;
    }
    return true;
}
int main(){
    vector<int> ans;
    vector<vector<int>> arr = {
        {1,2,3,4},
        {2,6,7,1},
        {9,1,11,2},
        {13,2,5,1}
    };
    for(int i = 0;i<4;++i){
        if(isPresent(arr,arr[0][i],4,4)){
            ans.push_back(arr[0][i]);
        }
    }
    for(auto val : ans){
        cout<<val<<" ";
    }
    cout<<endl;

return 0;
}