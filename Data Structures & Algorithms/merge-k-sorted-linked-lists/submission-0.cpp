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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())return nullptr;
        vector<int> temp;
        int dem = 0;
        for(int i= 0; i < lists.size(); i++){
            if(lists[i] == nullptr){
                dem++;
            }else{
                ListNode * temp1 = lists[i];
                while(temp1){
                    temp.push_back(temp1->val);
                    temp1 = temp1->next;
                }
            }
        }
        if(dem == lists.size())return nullptr;
        sort(temp.begin(),temp.end());
        ListNode*res = new ListNode(temp[0]);
        ListNode*k = res;
        for(int i = 1; i < temp.size(); i++){
            k->next = new ListNode(temp[i]);
            k = k->next;
        }
        return res;
    }
};