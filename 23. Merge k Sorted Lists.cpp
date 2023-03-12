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
    ListNode* mergeTwoLists(ListNode* l1,ListNode* l2)
    {
        if(l1==nullptr)return l2;
        if(l2==nullptr)return l1;

        ListNode* start = nullptr; 
        if(l1->val < l2->val){start = l1;l1=l1->next;start->next=nullptr;}
        else{start = l2;l2=l2->next;start->next=nullptr;}

        ListNode* p = start;
        while(l1!=nullptr && l2!=nullptr)
        {
            if(l1->val < l2->val)
            {
                p->next = l1;
                l1 = l1->next;
                p = p->next;
                p->next = nullptr;
            }
            else{
                p->next = l2;
                l2 = l2->next;
                p = p->next;
                p->next = nullptr;
            }
        }
        if(l1!=nullptr)p->next = l1;
        if(l2!=nullptr)
        {
            p->next=l2;
        }

        return start;
    }

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.empty())return nullptr;
        while(lists.size()>1)
        {
            lists.push_back(mergeTwoLists(lists[0],lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists.front();
    }
};
