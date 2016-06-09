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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        // handle the empty list
        if (l1 == NULL || l2 == NULL) {
            ListNode* newList = l1 == NULL ? l2 : l1;
            return newList;
        }
        
        // the head
        ListNode* head = new ListNode(0);
        ListNode* currNode = head;
        
        // the body
        while (l1 != NULL && l2 != NULL) {
             if (l1->val < l2->val) {
                 currNode->next = l1;
                 l1 = l1->next;
             }
             else {
                 currNode->next = l2;
                 l2 = l2->next;
             }
             currNode = currNode->next;
        }
        
        // the end
        if (l1 != NULL) currNode->next = l1;
        if (l2 != NULL) currNode->next = l2;
        
        return head->next;  // get off the first
    }
};