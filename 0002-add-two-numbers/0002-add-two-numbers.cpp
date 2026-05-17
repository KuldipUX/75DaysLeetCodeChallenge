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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //iss question me to linked list ki digits reverse already sorted de ralkhi hai but incase nahi di hoti to saise karte
        // int len1 = 0;
        // int len2 = 0;
        //traverse
        // while(current1!=NULL){
            // len1++;
            // current = current->next;
        // }
        // while(current2!=NULL){
            // len2++;
            // current = current->next;
        // }
        // 
        //reverse both linked lists
        // ListNode*prev = NULL;
        // ListNode*currentL1 = l1;
        // ListNode*next = NULL;
        // while(currentL1!=NULL){
            // next = currentL1->next;
            // currentL1->next = prev;
            // prev = currentL1;
            // currentL1 = next;
        // }
      
        //Reset pointers
        // prev = NULL;
    //  ListNode*currentL2 = l2;
        // next = NULL;
        // while(currentL2!=NULL){
            // next = currentL2->next;
            // currentL2->next = prev;
            // prev = currentL2;
            // currentL2 = next;
        // }
        ListNode*dummy = new ListNode(0);
        ListNode*temp = dummy;
        int carry = 0; 
        while(l1!=NULL ||l2!=NULL||carry){//jabtak teeno false nahi ho jaate jabtak chalega loop.
            int sum = carry;
            if(l1!=NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum/10;
            //create new listnode to store the answer.
            ListNode* newNode = new ListNode(sum%10);
            temp->next = newNode;
            temp = temp->next;
        }
        return dummy->next;
        

    }
};