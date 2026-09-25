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
    struct CompareNodes {
        bool operator()(const ListNode* a, const ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, CompareNodes> minHeap;

        for (ListNode* listHead : lists) {
            if (listHead != nullptr) {
                minHeap.push(listHead);
            }
        }
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;

        while (!minHeap.empty()) {
            ListNode* smallestNode = minHeap.top();
            minHeap.pop();
            tail->next = smallestNode;
            tail = tail->next;
            if (smallestNode->next != nullptr) {
                minHeap.push(smallestNode->next);
            }
        }
        return dummyHead->next;
    }
};