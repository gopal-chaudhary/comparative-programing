#include<bits/stdc++.h>

using namespace std;

vector<int> specialSort(vector<int> arr){
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(),sortedArr.end());
    int k = 0;
    for(int i = 0;i< arr.size();i+=2){
        arr[k++] = sortedArr[i];
    }
    for(int i = 1;i< arr.size();i+=2){
        arr[k++] = sortedArr[i];
    }
    return arr;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    vector<int> arr = {3,4,3,2,1,6,7,8,9};

    vector<int> res = specialSort(arr);
    for(auto & val : res){
        cout<< val<<" ";
    }
    

    return 0;
}