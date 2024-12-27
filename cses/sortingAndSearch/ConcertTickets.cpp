#include<bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    multiset<int> s;

    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        s.insert(x);
    }

    for(int i =0;i<m;++i){
        int amount;
        cin>>amount;
        
        auto lower_bound = s.lower_bound(amount);

        if(*lower_bound != amount){
            if(lower_bound == s.begin()){
                cout<<-1<<endl;
                continue;
            }
            --lower_bound;
            cout<<(*lower_bound)<<endl;
        }else{
            cout<<amount<<endl;
        }
        s.erase(lower_bound);

    }


    

    return 0;
}