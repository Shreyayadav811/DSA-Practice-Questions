/* Problem: remove every Kth node
Link: https://www.geeksforgeeks.org/problems/remove-every-kth-node/1

Approach: just start count = 1, move where count==k, remove that node and skip the rest, take care of the edge case where k==1
*/

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
}
lass Solution{
    public:

    Node*delete(Node*head, int k){
        if(k==1) return NULL;  //since removing the first node and returning head would give NULL

        Node*prev = NULL, curr = head;
        int count = 1;
        while(curr){
            if(k == count){    //k==count means delete/remove that node
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
            else{        //k!=count means skip that node, donot remove it
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};
