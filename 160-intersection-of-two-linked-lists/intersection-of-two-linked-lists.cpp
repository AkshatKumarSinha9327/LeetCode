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
        unordered_map<ListNode*,int> mp;
        while(headA!=NULL)
        {
            mp[headA]=1;
            headA=headA->next;
        }
        while(headB!=NULL)
        {
            if(mp[headB]==1)return headB;
            mp[headB]=1;
            headB=headB->next;
        }
        return NULL;
    }
};