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
        if (head==nullptr || head->next==nullptr){
            return nullptr;
        }

        ListNode* fast=head;

        for(int i=1;i<n;i++){
            fast=fast->next;
        }


        ListNode* slow=head;
        ListNode* dummy=nullptr;
        while(fast->next!=nullptr){

            fast=fast->next;

            dummy=slow;

            slow=slow->next;
        }

       if(slow==head){
        head=slow->next;
        return head;

       }

        dummy->next=slow->next;
        delete slow;





        
        return head;

    }
};