#include <iostream>
using namespace std;

int GCD(int a,int b){
	if(b%a == 0){
		return a;
	}
	return GCD(b%a,a);
}
// GCD(6,12)
int main(){
	int a,b;
	cin>>a>>b;
	cout<<GCD(a,b)<<endl;
	
	return 0;

}