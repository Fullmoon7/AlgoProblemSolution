#include <iostream>

using namespace std;

class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> m;
        int max = 0;
        for(auto& tmp: wall){
            int pos = 0;
            for(int i = 0; i<tmp.size()-1; i++){
                pos+=tmp[i];
                m[pos]++;
                if(m[pos] > max){
                    max = m[pos];
                }
            }
        }
        return wall.size()-max;
    }
};