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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL) return NULL;
        if (k == 0 || head->next == NULL) return head;
        
        ListNode* old_head = head;
        int size = 1;
        while (head->next != NULL) {
            size++;
            head = head->next;
        }
        head->next = old_head;
        cout << size << endl;
        k %= size;
        k = size - k;
        cout << k << endl;
        while (k > 1) {
            old_head = old_head->next;
        
            --k;
        }
        head = old_head->next;
        old_head->next = NULL;
        
        return head;
    }
};