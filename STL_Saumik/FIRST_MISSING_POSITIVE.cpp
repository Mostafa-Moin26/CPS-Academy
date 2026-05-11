// https://leetcode.com/problems/first-missing-positive/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int mn = INT_MAX;
        for(int i : nums){
            if(i<=0)continue;
            s.insert(i);
            mn = min(mn,i);
        }
        if(mn!=1)return 1;
        while(s.count(mn)){
            mn++;
        }
        return mn;
    }
};

class Solution2 {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0 && nums[i]<=nums.size() && 
            nums[nums[i]-1] != nums[i]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};