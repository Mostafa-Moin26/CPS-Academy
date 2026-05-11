// https://leetcode.com/problems/next-greater-element-i/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        stack<int> st;
        st.push(INT_MAX);
        for(int i=nums2.size()-1;i>=0;i--){
            while(nums2[i]>st.top())st.pop();
            mpp[nums2[i]] = st.top();
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i : nums1){
            if(mpp[i]==INT_MAX){
                ans.push_back(-1);
            }else{
                ans.push_back(mpp[i]);
            }
        }
        return ans;
    }
};