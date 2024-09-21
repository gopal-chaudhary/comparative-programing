#include<iostream>
#include<vector> 

using namespace std;

//2^31 2^31*31

// optimal solution
// Time  O(N)
// Space O(1)
void sortColors(vector<int> &nums) {
        int start = 0;
        int end = nums.size()-1;
        int mid = 0;
        while(mid <= end){
            if(nums[mid] == 0) swap(nums[mid++],nums[start++]);
            else if(nums[mid] == 2) swap(nums[mid],nums[end--]);
            else mid++;
        }
}


int main(){
	// input 
	// 5
	// 2 2 1 0 1 0 2
	int n ;
	cin>>n;
	vector<int> ans;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sortColors(arr);
	for(auto  &val :arr){
		cout<<val<<" ";
	}
	cout<<endl;


}