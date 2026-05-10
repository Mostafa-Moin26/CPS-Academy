// https://leetcode.com/problems/isomorphic-strings/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mpp,mpp2;
        for(int i=0;i<s.size();i++){
            if(mpp.count(s[i])){
                if(mpp[s[i]] != t[i]){
                    return false;
                }
            }else{
                mpp[s[i]] = t[i];
            }
            if(mpp2.count(t[i])){
                if(mpp2[t[i]] != s[i]){
                    return false;
                }
            }else{
                mpp2[t[i]] = s[i];
            }
        }
        return true;
    }
};
