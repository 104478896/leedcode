/*给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。*/
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
        ListNode* ans=NULL;
        ListNode* tail=head;
        while(tail){
            ListNode* temp=NULL;
            temp=tail->next;
            tail->next=ans;
            ans=tail;
            tail=temp;
        }
        return ans;
    }
};