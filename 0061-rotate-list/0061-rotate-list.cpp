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
   ListNode* findKthNode(ListNode*temp,int k){
    int var = 1;
       while(temp!=NULL){
         if(var==k){
            return temp;
         }
         temp=temp->next;
         var++;
       }
       return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||k==0) return head;
        //find tail and check the actual k rotation
    ListNode* temp = head;
    int len = 1;
    while(temp->next!=NULL){
        temp =temp->next;
        len++;
    }
   
    if(k%len==0) return head;
    k = k%len;
     //connect the tail
     temp->next = head;
   // find kth node
   ListNode* newNode = findKthNode(head,len-k);
      head = newNode->next;
      newNode->next = NULL;
      return head;
    }
    
};