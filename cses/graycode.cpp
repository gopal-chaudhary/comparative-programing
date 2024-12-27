#include <bits/stdc++.h>
using namespace std;


vector<int> grayCode(int n) {
    
    int mask = 1<<n;
    vector<int> R(mask);
    for(int i=0; i<mask; i++){
        int toggled = i^(i>>1);
        R[i] = toggled;
    }
    return R;
}
int main() {
    int n;
    cin >> n;
    vector<int> vec = grayCode(n ); 
    for (int i = 0; i < vec.size(); ++i) {
        string bit = "";
        int val =vec[i];

        for(int i=0;i<n;++i){
            bit = to_string(val&1)+bit;
            val>>=1;
        }

        cout << bit <<endl; 
    }
    return 0;
}
