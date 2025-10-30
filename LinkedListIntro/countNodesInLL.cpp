/*
Problem: count the number of nodes in a linked list

Approach: just take a node pointer temp at head and move till you reach end, intialiste count=0 and update with each iteration
*/


class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
    int getCount(Node* head) {
        
        int count = 0;
        Node*temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }
};
