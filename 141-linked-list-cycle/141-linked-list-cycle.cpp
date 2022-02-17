
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *first = head, *second = head;
        if(second == nullptr)
            return false;
        while(second -> next != nullptr && second -> next -> next != nullptr){
            second = second -> next -> next;
            first = first -> next;
            if(first == second)
                return true;
        }
        return false;
    }
};