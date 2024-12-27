#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n ;
    cin>> n;
    int num ;
    cin>> num;
    vector<int> lp(n+1,0);
    vector<int> hp(n+1);
    vector<bool> isprime(n+1,true);  
      
    for(int i = 2;i< n;++i){
        if(isprime[i]){
            lp[i] = hp[i] = i;
            for(int j = i*2;j< n;j+=i){
                isprime[j] = false;
                hp[j] = i;
                if(lp[j] == 0) lp[j] = i; 
            }
        }
    }

    while(num > 1){
        int hprime = hp[num];

        while(num%hprime ==0){
            cout<<hprime<<" ";
            num/=hprime;
        }
        
    }


    

    return 0;
}