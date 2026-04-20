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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> a;
        while(head){
            a.push_back(head->val);
            head = head->next;
        }
        for (int i = 0; i < a.size(); i += (k)) {
            if (i + (k - 1) >= a.size())break;
            reverse(a.begin() + i, a.begin() + i + k);
        }
        ListNode * res = new ListNode(a[0]);
        ListNode * temp = res;
        for(int i= 1; i < a.size(); i++){
            temp->next = new ListNode(a[i]);
            temp = temp->next;
        }
        return res;
    }
};