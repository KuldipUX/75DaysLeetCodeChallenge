class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* newHead = reverseList(head->next);

        head->next->next = head; // reverse
        head->next = NULL;

        return newHead;
    }
};