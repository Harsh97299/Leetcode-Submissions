class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        unordered_map<ListNode*,int> map;
        ListNode* temp = head;
        while(temp!=NULL){
            if(map.find(temp->next) != map.end()){
                return true;
            }
            map[temp->next]++;
            temp = temp->next;
        }
        return false;
    }
};