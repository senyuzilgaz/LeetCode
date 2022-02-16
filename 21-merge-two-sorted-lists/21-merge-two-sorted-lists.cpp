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
        if( !(list1 || list2) )
            return NULL;
        ListNode* solution = new ListNode;
        ListNode* temp = solution;
        while(list1 && list2)
        {
            bool comparison = (list1 -> val) < (list2 -> val);
            if(comparison)
            {
                temp -> val = list1 -> val;
                temp -> next = new ListNode;
                temp = temp -> next;
                list1 = list1 -> next;
            }
            else
            {
                temp -> val = list2 -> val;
                temp -> next = new ListNode;
                temp = temp -> next;
                list2 = list2 -> next;
            }
        }
        if(list1)
        {
            while(list1)
            {
                temp -> val = list1 -> val;
                list1 = list1 -> next;
                if(list1)
                {
                    temp -> next = new ListNode;
                    temp = temp -> next;
                }
                else
                    temp -> next = NULL;

            }
        }
        else if(list2)
        {
            while(list2)
            {
                temp -> val = list2 -> val;
                list2 = list2 -> next;
                if(list2)
                {
                    temp -> next = new ListNode;
                    temp = temp -> next;
                }
                else
                    temp -> next = NULL;
            }
        }
        return solution;
        
    }
};