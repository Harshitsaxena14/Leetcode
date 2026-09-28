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
class Solution
{
public:
    ListNode *front;

    bool reorder(ListNode *back)
    {
        if (back == nullptr)
            return false;

        if (reorder(back->next))
            return true;

        if (front == back || front->next == back)
        {
            back->next = nullptr;
            return true;
        }

        ListNode *nextFront = front->next;

        front->next = back;
        back->next = nextFront;

        front = nextFront;

        return false;
    }

    void reorderList(ListNode *head)
    {
        front = head;
        reorder(head);
    }
};