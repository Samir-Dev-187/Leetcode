#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution 
{
    public:
        int lengthList(ListNode* head)
        {
            int l = 0;
            while (head)
            {
                l++;
                head = head->next;
            }

            return l;
        }
        
        ListNode* helper(ListNode* head1, ListNode* head2, int diff)
        {
            ListNode* tempA = head1;
            while (diff > 0)
            {
                tempA = tempA->next;
                diff--;
            }

            ListNode* tempB = head2;
            while (tempA && tempB)
            {
                if (tempA == tempB) return tempA;
                tempA = tempA->next;
                tempB = tempB->next;
            }

            return NULL;
        }

        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
        {
            int l1 = lengthList(headA);
            int l2 = lengthList(headB);

            int diff = abs(l1 - l2);
            if(l1 > l2)            
            {  
                return helper(headA, headB, diff);
            }
            else
            {
                return helper(headB, headA, diff);
            }

            return NULL;
        }
};

ListNode* createList(vector<int> vals)
{
    if(vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* temp = head;
    for(int i = 1; i < vals.size(); ++i)
    {
        temp->next = new ListNode(vals[i]);
        temp = temp->next;
    }

    return head;
}

int main()
{
    Solution s1;

    ListNode* common = new ListNode(8);
    common->next = new ListNode(4);
    common->next->next = new ListNode(5);

    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = common;

    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = common;


    ListNode* ans = s1.getIntersectionNode(headA, headB);
    cout << ans->val;
    cout << endl;

    return 0;
}