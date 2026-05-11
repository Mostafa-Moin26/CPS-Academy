// https://leetcode.com/problems/third-maximum-number/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstMax = LLONG_MIN, secondMax = LLONG_MIN, thirdMax = LLONG_MIN;
        for(int i : nums){
            if(i==firstMax || i==secondMax || i==thirdMax)continue;
            if(i>firstMax){
                swap(firstMax,thirdMax);
                swap(secondMax,thirdMax);
                firstMax = i;
            }else if(i>secondMax){
                swap(secondMax,thirdMax);
                secondMax = i;
            }else if(i>thirdMax){
                thirdMax = i;
            }
        }

        return thirdMax==LLONG_MIN?firstMax:thirdMax;

    }
};
