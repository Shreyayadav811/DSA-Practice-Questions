/*
Problem: remove Nth node from end
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //count the number of nodes 
        int count = 0;
        ListNode*temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }

        
        count = count - n;   //to go on that node, afterwhich the next node has to be deleted
        if(count == 0){  //to remove first node i.e if count = 0 
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ListNode*prev = NULL, *curr = head;
        while(count--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
        return head;
    }
};
