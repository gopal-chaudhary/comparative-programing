#include<iostream>
#include<set>

using namespace std;
int maxN = -1;
int PrimeFact(int x){
	int temp = x;
	for(int i =2;i*i<=x;++i){
		if(temp%i == 0){
			maxN = max(maxN,i);
			while(temp%i==0){
				temp = temp/i;
			}
		}		
	}
	if(temp > 1){
		maxN = temp;
	}
	return maxN;
} 


int main(){
	int start = 0;
	int end= 0;
	int p = 0;
	cin>>start>>end;
	cin>>p;
	for(int i = start;i<=end;++i ){
		int maxN = PrimeFact(i);
		if(p >=maxN){
			cout<<"p is a smooth no. for "<<i<<" "<<endl;
			
		}else{

		cout<<"p is not a smooth no.for "<<i<<" "<<endl;	
		}
	}
	




	return 0;
}


/// v1
// #include<iostream>
// #include<set>

// using namespace std;
// int maxN = -1;
// int PrimeFact(int x){
// 	int temp = x;
// 	for(int i =2;i*i<=x;++i){
// 		if(temp%i == 0){
// 			maxN = max(maxN,i);
// 			while(temp%i==0){
// 				temp = temp/i;
// 			}
// 		}		
// 	}
// 	if(temp > 1){
// 		maxN = temp;
// 	}
// 	return maxN;
// } 


// int main(){
// 	int x = 0;
// 	int p = 0;
// 	cin>>x;
// 	cin>>p;
// 	int maxN = PrimeFact(x);
// 	if(p >=maxN){
// 		cout<<"p is a smooth no."<<endl;
// 		return 0;
// 	}
// 	cout<<"p is not a smooth no."<<endl;




// 	return 0;
// }