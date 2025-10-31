/*
problem: merge two sorted lists
link: https://leetcode.com/problems/merge-two-sorted-lists/submissions/1816686534/
*/
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
        ListNode*head1 = list1, *head2 =list2;
        if(!head1) return head2;
        if(!head2) return head1;

        //fix the head first
        ListNode*head = NULL;
        if(head1->val < head2->val){
            head = head1;
            head1 = head1->next;
        }
        else{
            head = head2;
            head2 = head2->next;
        }

        //tail will be at the end of merged list
        ListNode*tail = head;
        while(head1 && head2){
             if(head1->val < head2->val){
            tail->next = head1;
            head1 = head1->next;

        }
        else{
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
        }
       

        //attach the remaining nodes if any
        if(head1) tail->next = head1;
        if(head2) tail->next = head2;

        return head;
    }
};
