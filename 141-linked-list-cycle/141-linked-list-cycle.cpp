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
    bool hasCycle(ListNode *head) {
        ListNode *first = head, *second = head;
        if(head == nullptr)
            return false;
        while(second != nullptr && second -> next != nullptr){
            second = second -> next -> next;
            first = first -> next;
            if(first == second)
                return true;
        }
        return false;
    }
};