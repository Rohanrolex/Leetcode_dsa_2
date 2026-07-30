
class Solution {
public:

ListNode*  reverseList(ListNode * root){
    if(root == NULL) return root;

    ListNode* curr = root;
    ListNode * prev = NULL;

    while(curr){
        ListNode * next1 = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next1;
    }
    return prev;
}


    bool isPalindrome(ListNode* head) {
       if(head == NULL || head->next == NULL) return true;

       ListNode* slow = head;
       ListNode* fast = head;

       while( fast->next!= NULL && fast->next->next != NULL){
         slow = slow->next;
         fast = fast->next->next;
       }

      ListNode* list2 =  reverseList(slow->next);

      ListNode* p = head;
      ListNode* q = list2;
      while(q != NULL){

        if(p->val != q->val) return false;
        p = p->next;
        q = q->next;
      }
        return true;
    }
};