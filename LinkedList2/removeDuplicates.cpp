/*
Problem: remove duplicates from sorted list
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

Approach: take a node pointer curr which starts from head, iterate and compare if curr->val == curr->next->val, if yes delete that node by taking a temp node pointer
else, move to the next node

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*curr = head;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->val == curr->next->val){
                ListNode*temp = curr->next;
                curr->next = temp->next;
                delete temp;
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};
