#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
        {
            if (list1 == NULL || list2 == NULL)
            {
                return list1 == NULL ? list2 : list1;
            }

            if (list1->val <= list2->val)
            {
                list1->next = mergeTwoLists(list1->next, list2);
                return list1;
            }
            else 
            {
                list2->next = mergeTwoLists(list1, list2->next);
                return list2;
            }
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

void printList(ListNode* head)
{
    ListNode* temp = head;
    while (temp)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Solution s1;
    ListNode* head1 = createList({1,2,4});
    ListNode* head2 = createList({1,3,4});

    ListNode* head = s1.mergeTwoLists(head1, head2);

    printList(head);
    cout << endl;   

    return 0;
}