class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> nums;

        // Traverse every linked list
        for (ListNode* head : lists) {

            while (head) {
                nums.push_back(head->val);
                head = head->next;
            }
        }

        // Sort all values
        sort(nums.begin(), nums.end());

        // Convert vector back to linked list
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int x : nums) {
            curr->next = new ListNode(x);
            curr = curr->next;
        }

        return dummy->next;
    }
};