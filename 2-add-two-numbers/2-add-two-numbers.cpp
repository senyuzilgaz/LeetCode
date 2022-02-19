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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int offset = 0;
        ListNode *list1 = l1, *list2 = l2;
        ListNode *result = new ListNode(0);
        ListNode *prevNode = result;
        
        while(list1 != nullptr || list2 != nullptr || offset != 0){
            int val1 = 0;
            int val2 = 0;
            if(list1 != nullptr)
                val1 = list1 -> val;
            if(list2 != nullptr)
                val2 = list2 -> val;
            
            int number = val1 + val2 + offset;
            offset = number / 10;
            number = number % 10;
            ListNode* newNode = new ListNode(number);
            prevNode -> next = newNode;
            prevNode = newNode;
            if(list1 != nullptr)
                list1 = list1 -> next;
            if(list2 != nullptr)
                list2 = list2 -> next;
        }
        return result -> next;
    }
};