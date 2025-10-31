/*
Problem: search a node in ll

Time complexity: O(n)
*/

bool searchNode(ListNode* head, int target) {
    ListNode* curr = head;

    while (curr != NULL) {
        if (curr->val == target)
            return true;   // node found
        curr = curr->next;
    }

    return false;  // not found
}
