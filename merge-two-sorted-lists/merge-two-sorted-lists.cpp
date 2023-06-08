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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head=NULL,*temp;
        while(list1 && list2){
            if(list1->val < list2->val){
                ListNode *p=new ListNode;
                p->val=list1->val;
                p->next=0;
                if(head==NULL){
                    head=p; temp=p;
                }
                else{
                    temp->next=p; temp=p;
                }
                list1=list1->next;
            }
            else {
                ListNode *p=new ListNode;
                p->val=list2->val;
                p->next=0;
                if(head==NULL){
                    head=p; temp=p;
                }
                else{
                    temp->next=p; temp=p;
                }
                list2=list2->next;
            }
        }
        while(list1){
            ListNode *p=new ListNode;
            p->val=list1->val;
            p->next=0;
            if(head==NULL){
                head=p; temp=p;
            }
            else{
                temp->next=p; temp=p;
            }
            list1=list1->next;
        }
        while(list2){
            ListNode *p=new ListNode;
            p->val=list2->val;
            p->next=0;
            if(head==NULL){
                head=p; temp=p;
            }
            else{
                temp->next=p; temp=p;
            }
            list2=list2->next;
        }
        return head;
    }
};