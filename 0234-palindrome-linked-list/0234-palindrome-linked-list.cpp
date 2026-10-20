/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 -> get the middle of the linked list.
-> reverse the next half of the linked list.
-> if next half ( after reversing ) is equal to the first half
it means that the linked list is palindrome.
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> stack;
        ListNode* curr = head;

        while (curr) {
            stack.push(curr->val);
            curr =curr->next;
        }

        curr = head;

        while (curr && curr->val == stack.top()) {
            stack.pop();
            curr=curr->next;
        }

        return curr==nullptr;
    }
};