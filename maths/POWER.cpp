#include <iostream>
using namespace std;

int noOfCalls = 0;

// Binary exprention Recursive Methode;
long long int calcuate_power(int base,int power){
	++noOfCalls;
	if(power == 1) return base;
	long long int calp = calcuate_power(base,power/2);
	if(power&1 == 1){
		return calp*calp*base;
	}
	return  calp*calp;

}
// Binary exprention Itrative Methode;
long long int calcuate_power_Itrative(int base,int power){
	long long int currBase =  base;
	long long int ans = 1;
    while (power) {
        if (power & 1) {
            ans *= currBase; // Multiply the current base to ans if the current bit is set
        }
        currBase *= currBase; // Square the base
        power >>= 1; // Right shift power to process the next bit
    }
	return ans;

}

// power(6,12)
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"Recursive OutPut: "<<calcuate_power(a,b)<<endl;
	cout<<"no Of Recursive Calls : "<<noOfCalls<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Itrative OutPut: "<<calcuate_power_Itrative(a,b)<<endl;
	
	return 0;

}