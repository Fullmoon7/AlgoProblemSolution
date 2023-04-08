
#include <iostream>

using namespace std;
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char, int> s_map;
        int pos = 0;
        for(char p : s){
            auto it = s_map.find(p);
            if(it == s_map.end()) 
                s_map.insert({p,pos});
            else{
                int check = pos - it->second + 1;
                if(check != distance[p-'a'])
                    printf("err!");
            } 
            pos++;
        }
    }
};