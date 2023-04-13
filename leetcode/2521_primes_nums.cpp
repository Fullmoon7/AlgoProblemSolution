#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    //考虑直接对每个乘数做质因子分解，然后维护一个unordered_set记录质因子是否出现过
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> primes;
        for(int& num:nums){
            int tmp = num;
            for(int i = 2; i * i <= tmp; i++){
                if(tmp % i == 0) primes.insert(i);
                while(tmp%i==0){
                    tmp /= i;
                }
            }
            if(tmp > 1)
                primes.insert(tmp);
        }
        return primes.size();
    }
};