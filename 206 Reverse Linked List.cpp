/*Author: JerryYan
  comment:单链表翻转，需要2个额外的位置，也就是next和next->next然后翻转时才能找到每个点
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)return head;
        ListNode  *p = head->next;
        head->next = NULL;
        while(p!=NULL){
            ListNode  *tmp = p->next;
            p->next = head;
            head=p;
            p = tmp;
        }
        return head;
    }
};
