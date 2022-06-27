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
     ListNode* getNode(ListNode *target,ListNode *head)
     {
         ListNode* current = head;
         if(head == target)
             return NULL;
         while(current -> next != target)
             current = current -> next;
         return current;
     }
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        
        ListNode *left = head, *right = head -> next;
        
        while(right != NULL)
        {
            if(left -> val == right -> val) 
            {
               while(right != NULL && right -> val == left -> val )
               {
                   right = right -> next;
               }
               if(right == NULL)
               {
                   ListNode *x = getNode(left, head);
                   if(x == NULL)
                       return NULL;
                    x -> next = NULL;
                   return head;
               }
               else
               {
                   ListNode *x = getNode(left, head);
                   if(x == NULL)
                       head = right;
                   else
                       x -> next = right;
                   left = right;
                   right = right -> next;
               }
            }
            else
            {
                right = right -> next;
                left = left -> next;
            }
            
        }
        return head;
    }

};