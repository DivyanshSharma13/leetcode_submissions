class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> help;

        ListNode* prev = head;
        ListNode* temp = head->next;
        int count = 1;

        while (temp && temp->next) {
            ListNode* fut = temp->next;

            if ((temp->val > prev->val && temp->val > fut->val) ||
                (temp->val < prev->val && temp->val < fut->val)) {
                help.push_back(count);
            }

            prev = temp;
            temp = fut;
            count++;
        }

        if (help.size() < 2)
            return {-1, -1};

        int mn = INT_MAX;

        for (int i = 1; i < help.size(); i++) {
            mn = min(mn, help[i] - help[i - 1]);
        }

        int mx = help.back() - help.front();

        return {mn, mx};
    }
};