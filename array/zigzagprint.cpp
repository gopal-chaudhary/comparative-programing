#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 4;
    int m = 4;
    vector<int> ans;
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int count = 0;
    int dir = 0;
    int row = 0;
    int col = 0;
    while(count < m*n){
        ans.push_back(arr[row][col]);
        count++;
        if(dir==0){
            if(col == n-1){
                dir =1;
                row++;
            }else if(row == 0){
                dir =1;
                col++;
            }else{
                row--;
                col++;
            }
        }else{
            // dir ==1;
            if(row == m-1){
                dir = 0;
                col++;
            }else if(col == 0){
                dir = 0;
                row++;
            }else{
                row++;
                col--;
            }
        }
    }

    for(auto val : ans) cout<<val<<" ";
    cout<<endl;
    

    

return 0;
}