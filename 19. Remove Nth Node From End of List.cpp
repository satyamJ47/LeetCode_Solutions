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
        ListNode* p = head;
        int cnt = 0;
        while(p!=nullptr){
            p=p->next;
            cnt++;
        }
        int t = cnt - n;
        p = head;
        while(t>1)
        {
            p=p->next;
            t--;
        }
        if(cnt==n)
        head=head->next;
        else
        p->next = p->next->next;
        return head;
    }
};
