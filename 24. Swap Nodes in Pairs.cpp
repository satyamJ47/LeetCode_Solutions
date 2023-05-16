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
    ListNode* swapPairs(ListNode* head) {
        
        if(head == NULL || head->next==NULL)return head;
        ListNode* ppre = head;
        ListNode* p = head;
        ListNode* q = head;
        while(p!=NULL && p->next!=NULL)
        {
            cout<<p->val<<" "<<q->val<<"  ";
            if(p==head)
            {
                q=p->next;
                head = q;
                p->next = q->next;
                q->next = p;
                // cout<<p->val<<" "<<q->val<<"  ";
                // break;
            }
            else {
                p->next = q->next;
                q->next = p;
                ppre ->next = q;
            }
            // cout<<p->val<<" "<<q->val<<endl;
            ListNode* temp = p;
            p=q;
            q = temp;
            cout<<p->val<<" "<<q->val<<endl;
            
            ppre=p->next;
            p=p->next->next;
            if(p==NULL || p->next==NULL)break;
            q=p->next;
            // break;
        }
        return head;
    }
};
