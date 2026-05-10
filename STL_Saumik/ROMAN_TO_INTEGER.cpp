// https://leetcode.com/problems/roman-to-integer/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        int num=mpp[s[0]];
        for(int i=1;i<s.size();i++){
            if(mpp[s[i]]>mpp[s[i-1]]){
                num -= mpp[s[i-1]];
                num += mpp[s[i]]-mpp[s[i-1]];
            }else{
                num += mpp[s[i]];
            }
        }
        return num;
    }
};