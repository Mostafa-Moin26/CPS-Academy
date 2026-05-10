// Problem link ---->
https://leetcode.com/problems/two-sum/description/

// Solution --->

// Brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

     for (int i = 0; i < nums.size() - 1; i++)
     for (int j = i + 1; j < nums.size(); j++)
     if (nums[i] + nums[j] == target)
     return {i, j};

        return {-1, -1};
    }
};

// Optimal
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> mp;

       for (int i = 0; i < nums.size(); i++) {
            
            int x = target - nums[i];

            if (mp.count(x)) {
                return {mp[x], i};
            }
            mp[nums[i]] = i;
       } 

       return {-1, -1};
    }
};