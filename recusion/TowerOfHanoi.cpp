#include<iostream>

using namespace std;
void TOH(int n,char b,char a,char e){
    if(n==1){
        cout<<"Move Disk "<<n<<" from "<<b<<" to "<<e<<endl;
    }else{
        TOH(n-1,b,e,a);
        cout<<"Move Disk "<<n<<" from "<<b<<" to "<<e<<endl;
        TOH(n-1,a,b,e);
    }
}

int main(){
    TOH(3,'B','A','E');

return 0;
}