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
        ListNode *node1 = list1, *node2 = list2, *prev = nullptr;
        if(list1 == nullptr)
            return list2;
        if(list2 == nullptr)
            return list1;
        
        while(node1 != nullptr && node2 != nullptr){
            if(node1 -> val < node2 -> val){
                prev = node1;
                node1 = node1 -> next;
            }else{
                if(prev != nullptr)
                    prev -> next = node2;
                prev = node2;
                node2 = node2 -> next;     
                prev -> next = node1;
            }
        }
        if(node1 == nullptr)
            prev -> next = node2;
        
        if(list1 -> val < list2 -> val)
            return list1;
        return list2;
        
    }
};