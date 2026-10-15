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

        ListNode d(0);
        ListNode *curr = &d;
        int cr=0;

        while(l1!=nullptr||l2!=nullptr||cr){

            int sm=cr;
            if(l1!=nullptr){
                sm+=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr){
                sm+=l2->val;
                l2=l2->next;
            }

            cr = sm/10;
            curr->next= new ListNode(sm%10);
            curr=curr->next;
        }

        return d.next;
        
    }
};
