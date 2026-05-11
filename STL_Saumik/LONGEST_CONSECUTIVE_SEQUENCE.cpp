// https://leetcode.com/problems/longest-consecutive-sequence/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int> st(nums.begin(),nums.end());
        int ans = 1;
        for(int x : st){
            if(!st.count(x-1)){
                int cnt = 0;
                for(int i = x;st.count(i);i++){
                    cnt++;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
