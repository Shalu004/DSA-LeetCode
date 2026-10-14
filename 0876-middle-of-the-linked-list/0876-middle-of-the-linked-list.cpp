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
    ListNode* middleNode(ListNode* head) {
        // if(head==NULL || head->next==NULL) return head;

        // ListNode* prev=head;
        // ListNode* temp=head;

        // while(temp != NULL && temp->next !=NULL){
        //     prev=prev->next;                        
        //     temp=temp->next->next;                 //moved 2 steps
        // }
        // return prev;



        //using slow fast pointer
        ListNode *slow = head, *fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};