// https://leetcode.com/problems/kth-largest-element-in-a-stream/description/

#include<bits/stdc++.h>
using namespace std;

class KthLargest {
    priority_queue<int> pq;
    int sz;
public:
    KthLargest(int k, vector<int>& nums) {
        sz = k;
        for(int i : nums){
            pq.push(-i);
            if(pq.size()>sz){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(-val);
        if(pq.size()>sz){
            pq.pop();
        }
        return -pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */