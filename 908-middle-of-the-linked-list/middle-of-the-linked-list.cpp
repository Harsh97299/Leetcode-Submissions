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
    int trav(ListNode* head){
        ListNode*temp = head;
        int i = 1;
        while(temp->next != nullptr){
            i++;
            temp = temp->next;
        }
        return i;
    }
    ListNode* middleNode(ListNode* head) {
        int size = trav(head);
        int middle = size/2 + 1;
        ListNode* mid = head;
        while(middle > 1){
            mid = mid->next;
            middle--;
        }
         
        return mid;
    }
};