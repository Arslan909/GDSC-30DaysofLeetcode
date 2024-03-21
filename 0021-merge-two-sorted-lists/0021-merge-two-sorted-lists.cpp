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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* final = nullptr; 
        ListNode* current = nullptr; 

        while (list1 != nullptr && list2 != nullptr) {
            ListNode* newNode = nullptr;

            if (list1->val < list2->val) {
                newNode = list1;
                list1 = list1->next;
            } 
            else 
            {
                newNode = list2;
                list2 = list2->next;
            }

            if (final == nullptr) {
                final = newNode;
                current = final;
            } 
            else
            {
                current->next = newNode;
                current = current->next;
            }
        }

        if (list1 != nullptr) {
            if (final == nullptr) {
                final = list1;
            } 
            else
            {
                current->next = list1;
            }
        } 
        else 
        {
            if (final == nullptr) {
                final = list2;
            } else {
                current->next = list2;
            }
        }

        return final;
    }
};