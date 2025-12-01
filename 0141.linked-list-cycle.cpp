// https://leetcode.com/problems/linked-list-cycle/

// this is an accepted submission but not optimal
// the optimal solution uses hare and tortoise approach

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::vector<ListNode*> tracker; 

        ListNode *current = head;

        while (current != nullptr) {
            auto it = std::find(tracker.begin(), tracker.end(), current);

            if (it != tracker.end()) {
                return true;
            }

            tracker.push_back(current);

            current = current->next;
        }

        return false;
    }
};