/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>m;
        Node *temp=head;
        while(temp){
            Node *p=new Node(-1);
            p->val=temp->val;
            p->next=p->random=NULL;
            m[temp]=p;
            temp=temp->next;
        }
        temp=head;
        Node *newhead=m[temp];
        while(temp){
            Node *p=m[temp];
            Node *p1=m[temp->next];
            Node *p2=m[temp->random];
            p->next=p1;
            p->random=p2;
            temp=temp->next;
        }
        return newhead;

    }

};