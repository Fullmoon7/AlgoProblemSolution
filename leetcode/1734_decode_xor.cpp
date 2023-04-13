#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size() + 1;
        int total = 0;
        for(int i = 1; i <= n; i++){
            total ^= i;
        }
        int except_0 = 0;
        for(int i = 1; i < encoded.size(); i+=2){
            except_0 ^= encoded[i];
        }
        vector<int> perm(n);
        perm[0] = total ^ except_0;
        for(int i = 1; i < n; i++){
            perm[i] = perm[i-1] ^ encoded[i-1];
        }
        return perm;
    }
};