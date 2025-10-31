/*
Problem : add two numbers
Link: https://leetcode.com/problems/add-two-numbers/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy = new ListNode(-1);
        ListNode*curr = dummy;
        int carry = 0;

        while(l1!=NULL || l2!=NULL || carry!= 0){
           int x = 0, y=0;
           if(l1 != NULL) x = l1->val;         //to avoid segmentation fault when l1 aur l2 becomes null
           if(l2 != NULL) y = l2->val;

           int sum = x+y+carry;
            carry = sum/10;

            curr->next = new ListNode(sum%10);          //digit which will be added to dummy node
            curr = curr->next;

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        

        return dummy->next;
    }
};
