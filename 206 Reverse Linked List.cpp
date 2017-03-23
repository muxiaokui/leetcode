/*Author: JerryYan
  comment:������ת����Ҫ2�������λ�ã�Ҳ����next��next->nextȻ��תʱ�����ҵ�ÿ����
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
