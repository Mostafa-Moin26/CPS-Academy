// https://leetcode.com/problems/jewels-and-stones/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;
        for(char ch : jewels){
            st.insert(ch);
        }
        int ans = 0;
        for(char ch : stones){
            if(st.count(ch))ans++;
        }
        return ans;
    }
};