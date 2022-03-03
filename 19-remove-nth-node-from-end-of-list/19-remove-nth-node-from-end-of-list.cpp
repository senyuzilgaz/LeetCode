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
        ListNode *end = head, *current = head, *temp = nullptr;
        int count = 0;
        while(end != nullptr && count < n){
            end = end -> next;
            ++count;
        }
        if(count < n)
            return head;
        while(end != nullptr){
            end = end -> next;
            temp = current;
            current = current -> next;
        }
        if(temp == nullptr)
            return head -> next;
        temp -> next = current -> next;
        current -> next = nullptr;
        return head;
    }
};