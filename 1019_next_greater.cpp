#include <iostream>
#include <stack>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ret;
        stack<pair<int,int>> s;
        ListNode *p = head;
        int pos = 0;
        while(p!=nullptr){
            ret.push_back(0);
            while(!s.empty() && s.top().first < p->val){
                ret[s.top().second] = p->val;
                s.pop();
            }
            s.emplace(p->val, pos);
            pos++;
            p = p->next;
        }
        return ret;
    }
};