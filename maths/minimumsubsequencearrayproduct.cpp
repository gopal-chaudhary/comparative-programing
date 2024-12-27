#include<bits/stdc++.h>

using namespace std;

int minimumproduct(vector<int> arr){
    sort(arr.begin(),arr.end());
    if(arr[0] < 0) { 
        // means contain neg number
        int i = 0;
        long long product = 1;
        for(;i< arr.size() && arr[i] < 0;++i){
            product *= arr[i];
        }
        if((i)%2 == 0) {
            // means need to subtract one greates - number which is at index i-1;
            product /= arr[i-1];
        }

        // multiply it with all the prossitive integers
        // first skip all the zero
        for(; i < arr.size() && arr[i] ==0 ;++i) continue;

        // multiply with the remain
        for(;i< arr.size();++i){
            product *= arr[i];

        }
        return product;

    }
    else{
        // means there is no -neg nor zeor in array so return the smalles number 
        // it also covers else if(arr[0] == 0) return 0;
        return arr[0];
    }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    vector<int> arr = {1,0,-2,4};
    cout<<"ans: "<<minimumproduct(arr);
    

    return 0;
}