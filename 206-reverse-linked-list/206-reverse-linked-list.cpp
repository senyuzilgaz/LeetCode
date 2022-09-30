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
    ListNode* reverseList(ListNode* head) {
        vector<ListNode*> nodes;
        ListNode* tra = head;
        while(tra != nullptr){
            nodes.push_back(tra);
            tra = tra -> next;
        }
        for(int i = nodes.size()-1; i > 0; --i){
            nodes[i] ->next = nodes[i-1];
        }
        std::cout << "dsds";
        if(head != nullptr){
            nodes[0] -> next = nullptr;
            head = nodes[nodes.size()-1];
        }
        return head;
        
    }
};