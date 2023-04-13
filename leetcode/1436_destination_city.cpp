#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> s;
        for(vector<string> path: paths){
            s.insert(path[0]);
        }
        string ret;
        for(vector<string> path: paths){
            if(s.find(path[1]) == s.end()){
                ret = path[1];
                break;
            }
        }
        return ret;
    }
};