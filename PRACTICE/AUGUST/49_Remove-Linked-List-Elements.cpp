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
        ListNode* removeElements(ListNode* head, int val) 
        {
            if (!head) return NULL;
            
            head->next = removeElements(head->next, val);

            if (head->val == val)
            {
                ListNode* temp = head->next;
                delete head;    
                return temp;
            }

            return head;
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
    ListNode* head = createList({1,2,6,3,4,5,6});
    int val = 6;

    ListNode* ans = s1.removeElements(head, val);

    printList(ans);
    cout << endl;

    return 0;
}