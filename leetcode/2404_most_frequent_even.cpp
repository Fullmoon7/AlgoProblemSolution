#include<iostream>

using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> s;
        int ret = -1;
        int maxCount = 0;
        for(int x:nums){
            if(x % 2 == 0){
                s[x]++;
                if(s[x] > maxCount){
                    ret = x;
                    maxCount = s[x];
                }else if(s[x] == maxCount){
                    if(x < ret){
                        ret = x;
                    }
                }
            }
        }
        return ret;
    }
};