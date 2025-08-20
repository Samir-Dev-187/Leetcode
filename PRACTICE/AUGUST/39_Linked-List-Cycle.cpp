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
        bool hasCycle(ListNode *head) 
        {
            if (!head || !head->next) return false; 
            
            ListNode* slow = head;
            ListNode* fast = head;

            while (fast && fast->next)
            {
                slow = slow->next;
                fast = fast->next->next;
                
                if(slow == fast) return true;
            }

            return false;
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

    ListNode* list = createList({3,2,0,-4});
    list->next->next->next->next = list->next;
    
    cout << s1.hasCycle(list);
    cout << endl;

    return 0;
}