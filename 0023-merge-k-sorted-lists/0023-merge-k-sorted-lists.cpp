
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL&&b!=NULL){
            if(a->val<=b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else{
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
        if(a==NULL){
            temp->next = b;
        }
        else{
            temp->next = a;
        }
        return c->next;
    }
     ListNode* mergeKLists(vector<ListNode*>& Lists){
    if(Lists.size()==0) return NULL;
    while(Lists.size()>1){
        ListNode* a=Lists[Lists.size()-1];
       Lists.pop_back();
        ListNode* b=Lists[Lists.size()-1];
        Lists.pop_back();
        ListNode* c = mergeTwoLists(a,b);
        Lists.push_back(c);
    }
    return Lists[0];
     }
};