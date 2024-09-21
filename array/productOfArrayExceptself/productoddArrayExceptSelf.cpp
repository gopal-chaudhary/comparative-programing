#include <iostream>
#include <vector>

using namespace std;

// Time = O(3N)
// Space = O(2N); (except ans)
vector<int> productOfArrayExeptSelf(vector<int> & arr,int n){
	vector<int>suf1(n,0);
	vector<int>suf2(n,0);
	vector<int>ans(n,0);
	int pre = 1;
	for(int i=0;i<n;i++){
		suf1[i] =pre;
		pre*=arr[i]; 
	}
	int post = 1;
	for(int i=n-1;i>=0;i--){
		suf2[i] =post;
		post*=arr[i]; 
	}
	for(int i=0;i<n;i++){
		ans[i] = suf1[i]*suf2[i];
	}
	return ans;

}

// Time = O(N)
// Space = O(1); (except ans)

vector<int> productOfArrayExeptSelfOPT1(vector<int> & arr,int n){
	vector<int>ans(n,1);
	int pre = 1;
	int post = 1;
	for(int i=0;i<n;i++){
		ans[i] *= pre;
		ans[n-i-1] *= post;
		pre *= arr[i];
		post *= arr[n-i-1];
	}
	return ans;

}
int main(){
	// input 
	// 4
	// 1 2 3 4
	int n ;
	cin>>n;
	vector<int> ans;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	// ans = productOfArrayExeptSelf(arr,n);
	ans = productOfArrayExeptSelfOPT1(arr,n);
	for(auto &val : ans){
		cout<<val<<" ";
	}
	cout<<endl;
}