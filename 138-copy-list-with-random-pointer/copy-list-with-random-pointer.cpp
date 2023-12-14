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
        Node *newHead=NULL,*newTemp;
        Node *temp=head;
        while(temp){
            Node *ptr=new Node(temp->val);
            if(newHead==NULL){
                newHead=ptr ; newTemp=newHead;
            }
            else{
                newTemp->next=ptr; newTemp=ptr;
            }
            m[temp]=ptr;
            temp=temp->next;
        }

        temp=head;
        while(temp){
            Node *newNode = m[temp];
            newNode->random = m[temp->random];
            temp=temp->next;
        }
        return newHead;

    }

};