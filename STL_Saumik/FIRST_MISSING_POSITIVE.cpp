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