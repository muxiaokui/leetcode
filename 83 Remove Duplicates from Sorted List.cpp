/*Author: JerryYan
   comment:water
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void gao(ListNode* head){
        if(head->next == NULL){
            return;
        }
        if(head->next->val == head->val){
            head->next = head->next->next;
            gao(head);
        }
        else {
            gao(head->next);
        }
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ret = head;
        if(head==NULL)return head;
        gao(head);
        return ret;
    }
};