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
    ListNode* partition(ListNode* head, int x) {
        if (head == NULL) return head;

        ListNode* newHead = new ListNode(0);
        newHead->next = head;
        
        ListNode* node1 = newHead;
        ListNode* current = newHead;
        
        while (current->next != NULL) {
            cout << current->next->val << endl;
            if (current->next->val < x) {
                // cout << current->next->val << endl;
                ListNode* temp = current->next;
                ListNode* temp2 = node1->next;
                
                if (temp == temp2) {
                    current = current->next;
                    node1 = node1->next;
                }
                else {
                    current->next = current->next->next;
                    node1->next = temp;
                    temp->next = temp2;
                    node1 = node1->next;
                }
                
            }
            else {
                current = current->next;
                
            }
        }
        
        return newHead->next;
    }
};