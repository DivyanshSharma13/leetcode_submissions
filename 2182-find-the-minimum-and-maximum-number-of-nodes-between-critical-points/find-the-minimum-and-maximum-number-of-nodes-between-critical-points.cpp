/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* temp = head->next;
        int count=0;
        vector<int>ans;
        while(temp && temp->next){
            ListNode* fut = temp->next;
            if((prev->val<temp->val && temp->val>fut->val) || (prev->val>temp->val && temp->val<fut->val)){
                ans.push_back(count);
            }
            count++;
            prev = temp;
            temp=fut;
        }
        if(ans.size()<2){
            return {-1,-1};
        }
        int mn = INT_MAX;
        for(int i=1;i<ans.size();i++){
            mn = min(mn,ans[i]-ans[i-1]);
        }
        int mx = ans.back()-ans.front();
        return {mn,mx};
    }
};