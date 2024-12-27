int main(){
    int  n = 5;

    for(int a = 1;a < n;++a){
        long long int cal = pow(a,n) - a;
        if(cal % n !=0) return false;
    }
    


}