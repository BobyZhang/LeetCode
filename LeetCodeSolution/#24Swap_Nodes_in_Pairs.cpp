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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* temp = head;
        head = head->next;
        temp->next = head->next;
        head->next = temp;
        
        ListNode* newHead = head;
        
        while (temp->next != NULL && temp->next->next != NULL) {
            temp = temp->next;
            head->next->next = temp->next;
            head = temp->next;
            temp->next = head->next;
            head->next = temp;
        }
        return newHead;
    }
};