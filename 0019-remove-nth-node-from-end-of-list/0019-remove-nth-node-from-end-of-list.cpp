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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (n == 1 && head->next == nullptr) {
            delete head;
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        int i =1;
        while(fast->next !=  nullptr){
            fast = fast->next;
            i++;
        }

        if (i == n) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int j=0;
        while(j != i - n -1){
            slow = slow->next;
            j++;
        }
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        
        return head;
    }
};









