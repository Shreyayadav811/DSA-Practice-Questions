/*
Problem: rotate linked list by k places
Link: https://leetcode.com/problems/rotate-list/submissions/1815796007/

Approach: first go to the breaking position by doing (count - k) count is no of node in the list, then break it from there using prev->next = NULL
afterwards, make a node pointer temp, iterate till it reaches the end of second part of the list, link it to the head (tail->next = head), mark head = curr and return head

Time Complexity: O(n)

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        //count the number of nodes
        int count = 0;
        ListNode*temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }

        k = k%count;
        if(k == 0) return head;
        count = count - k;

        ListNode*curr = head, *prev = NULL;
        while(count--){
            prev = curr;
            curr = curr->next;
        }

        //breaking at k
        prev->next = NULL;

        ListNode*tail = curr;
        while(tail->next!=NULL){
            tail = tail->next;
        }
        tail->next = head;
        head = curr;
        return head;
    }
};
