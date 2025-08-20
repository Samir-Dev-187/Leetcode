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
        ListNode* deleteDuplicates(ListNode* head) 
        {
            ListNode* temp = head;
            while (temp && temp->next)
            {
                if(temp->val == temp->next->val)
                {
                    ListNode* t = temp->next;
                    temp->next = t->next;
                    delete t;
                }
                else
                {
                    temp = temp->next;
                }
            }

            return head;
        }
};

ListNode* createList(vector<int> vals)
{
    if(vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for(int i = 1; i < vals.size(); ++i)
    {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
};

void printList(ListNode* head)
{
    while (head)
    {
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Solution s1;

    ListNode* list = createList({1,1,2});

    ListNode* distintList = s1.deleteDuplicates(list);

    printList(distintList);
    cout << endl;

    return 0;
}