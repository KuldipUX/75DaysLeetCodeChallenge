
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* tempA =a;
        ListNode* tempB = b;
        ListNode* dummy = new ListNode(100);
        ListNode* tempC =dummy;
        while(tempA!=NULL && tempB!=NULL){
            if(tempA->val <=tempB->val){
                ListNode* t = new ListNode(tempA->val);
                tempC->next = t;
                tempC = t;
                tempA = tempA->next;
            }
            else{
                ListNode* t = new ListNode(tempB->val);
                tempC->next = t;
                tempC = t;
                tempB = tempB->next;
            }
           
        }
         if(tempA==NULL){
                tempC->next = tempB;
            }
            else{
                tempC->next = tempA;
            }
            return dummy->next;
    }
};