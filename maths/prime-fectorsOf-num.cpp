#include<iostream>
#include<set>

using namespace std;
void PrimeFact(int x){
	int temp = x;
	for(int i =2;i*i<=x;++i){
		if(temp%i == 0){
			cout<<i<<" ";
			while(temp%i==0){
				temp = temp/i;
			}
		}		
	}
	if(temp > 1){
		cout<<temp<<" ";
	}
} 


int main(){
	int x = 0;
	cin>>x;
	PrimeFact(x);

	return 0;
}