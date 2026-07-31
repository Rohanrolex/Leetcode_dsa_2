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
         ListNode * dummy = new ListNode(0);
         ListNode* curr = dummy;
         ListNode* p = list1;
         ListNode* q = list2;

         while(p != NULL && q!= NULL){
            if(p->val <= q->val){
                curr->next = p;
                p = p->next;
            }else{
                curr->next = q;
                q = q->next;
            }

           curr = curr->next;
            
         }



          while(p != NULL){
                curr->next = p;
                curr = curr->next;
                p = p->next;
            }
             while(q!= NULL){
                curr->next = q;
                curr = curr->next;
                q = q->next;
            }

         return dummy->next;
    }
};