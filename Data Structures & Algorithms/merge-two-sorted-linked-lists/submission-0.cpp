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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    vector<int> res;
    for (ListNode* t = list1; t; t = t->next) res.push_back(t->val);
    for (ListNode* t = list2; t; t = t->next) res.push_back(t->val);

    sort(res.begin(), res.end());
    
    ListNode dummy(0);
    ListNode* current = &dummy;
    for (int x : res) {
        current->next = new ListNode(x);
        current = current->next;
    }
    return dummy.next;
}
};