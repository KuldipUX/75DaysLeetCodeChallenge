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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //pehle dono ki length nikal lete hai .
        int lenA = 0;
        int lenB = 0;
        //two node pointers for iterations
        ListNode*tempA = headA;
        ListNode*tempB = headB;
        
        //traverse to find length
        while(tempA!=NULL ){
            lenA++;
            tempA = tempA->next;
        }
        while(tempB!=NULL){
            lenB++;
            tempB = tempB->next;
        }
        //after finding length reset the pointers node
        tempA = headA;
        tempB = headB;
        if(lenA>lenB){
            int diff = lenA-lenB;
            for(int i =0;i<diff;i++){
                tempA = tempA->next;
            }
            while(tempA!=tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
      else{  
            int diff = lenB-lenA;
            for(int i =0;i<diff;i++){
                tempB = tempB->next;
            }
            while(tempB!=tempA){
               
                tempB = tempB->next;
                tempA = tempA->next;
            }
            return tempB;
        }
    }
};