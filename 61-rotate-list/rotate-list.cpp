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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* a=head;
        int b=0;
        while(a!=NULL){
            a=a->next;
            b++;
        }
        ListNode* curr=head;
        ListNode* prev=new ListNode(-1);
        prev->next=curr;
        int i=0;
        k=k%b;
        while(i<k){
            while(curr->next!=NULL){
                prev=curr;
                curr=curr->next;

            }
            curr->next=head;
            prev->next=NULL;
            head=curr;
            i++;
        }
        return head;
        
    }
};