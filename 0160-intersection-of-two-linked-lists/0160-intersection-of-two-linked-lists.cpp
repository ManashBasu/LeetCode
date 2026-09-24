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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p = headA;
        ListNode* q = headB;

        while ( p != q)
        {
            if (p == nullptr)
            {
                p = headA;
            }
            else
            {
                p = p -> next;
            }
            if (q == nullptr)
            {
                q = headB;
            }
            else
            {
                q = q -> next;
            }

        }
        return q;
    }
};