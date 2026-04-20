class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)return nullptr;
        vector<int> temp;
        while(head){
            temp.push_back(head->val);
            head = head->next;
        }

        reverse(temp.begin(), temp.end());

        ListNode* res = new ListNode(temp[0]);
        ListNode* tempk = res;

        for(int i = 1; i < temp.size(); i++){
            tempk->next = new ListNode(temp[i]);
            tempk = tempk->next;
        }
        
        return res;
    }
};