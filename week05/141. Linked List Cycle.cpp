//141. Linked List Cycle
//Time Complexity : O(N)
//Space Complexity : O(1)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        auto slow = head;
        auto fast = head;
        while(fast && fasy->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};

