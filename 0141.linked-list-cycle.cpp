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


class Solution2 {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return false;

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            if (slow == fast) {
                return true;
            }

            slow = slow->next;
            fast = fast->next->next;
        }

        return false;
    }
};
