// https://leetcode.com/problems/word-pattern/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp1;
        map<string,char> mp2;
        stringstream ss(s);
        string word;
        for(char ch : pattern){
            ss>>word;
            if(mp1.count(ch)==0 && mp2.count(word)==0){
                mp1[ch] = word;
                mp2[word] = ch;
            }else if(mp1.count(ch) && mp2.count(word)){
                if(mp1[ch] != word || mp2[word] != ch){
                    return false;
                }
            }else{
                return false;
            }
        }
        return ss.eof();
    }
};