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
         int ans=0,c=0;
        ListNode *head=NULL,*temp;
        
        while(l1!=0 && l2!=0)
        {
            ListNode *p=new ListNode;
            p->val=(l1->val+l2->val +c)%10;
            c=(l1->val+l2->val +c)/10;
            p->next=0;
            if(head==NULL)
            {
                head=p;
                temp=p;
            }
            else
            {
                temp->next=p;
                temp=p;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
             ListNode *p=new ListNode;
            p->val=(l1->val+c)%10;
            p->next=0;
            c=(l1->val+c)/10;
            if(head==NULL)
            {
                head=p;
                temp=p;
            }
            else
            {
                temp->next=p;
                temp=p;
            }
            l1=l1->next;
        }
         while(l2!=NULL)
        {
             ListNode *p=new ListNode;
            p->val=(l2->val+c)%10;
            p->next=0;
            c=(l2->val+c)/10;
            if(head==NULL)
            {
                head=p;
                temp=p;
            }
            else
            {
                temp->next=p;
                temp=p;
            }
            l2=l2->next;
        }
        if(c!=0){
            ListNode *p=new ListNode;
            p->val=c;
            p->next=0;
             if(head==NULL)
            {
                head=p;
                temp=p;
            }
            else
            {
                temp->next=p;
                temp=p;
            }
        }
        return head;
    }
};