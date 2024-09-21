#include<bits/stdc++.h>
using namespace std;
// Time->O(NlogN) ;;;;;;; O(1) -> spaceb
bool target(vector<int>& nums,int target){
    sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size()-1;
       
        while(left < right){
            int sum = nums[left]+nums[right];
            if(sum == target) return true;
            else if(sum > target) right--;
            else left++;
            
        }
    return false;
}
// time -> O(N) space -> O(N)
bool target(vector<int>& nums,int target){
    unordered_set<int> set;
    for(auto val : nums){
        int remains = target-val;
        if(set.find(remains) !=set.end()){
            return true;
        }
        set.insert(val);
    }
    return false;
}