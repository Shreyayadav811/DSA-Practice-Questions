/*
Problem: Palindrome Linked List
Link: https://leetcode.com/problems/palindrome-linked-list/submissions/1816319029/

Approach1: copy all the elements into a vector<int>ans, use two pointers st and end, compare the elements and return true or false
Approach2: 1)find middle of the list
            2) reverse the second half
            3) use two node pointers fro both halves and compare, Node*head1 = head (of first half)
            Node*head2 = prev (of second half)

            Time complexity: O(n) (single traversal + one reverse + one comparison 
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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;   //edge case:only one element
        int count = 0;
        ListNode*temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        //find the middle
        count = count/2;
        ListNode*prev = NULL, *curr = head;
        while(count--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL; //split list into two halves

        //reverse the second half
        
        ListNode*front = NULL;
        prev = NULL; 
        while(curr){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        //compare
        //prev points to second half from backwards
        //head points to first half

        ListNode*head1 = head, *head2 = prev;
        //check palindrome
        while(head1 && head2){
            if(head1->val != head2->val){
            return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        
        
        return true;
    }
};
