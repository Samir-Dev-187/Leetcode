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
    ListNode* reverseList(ListNode* head) 
    {
        // base case
        if (!head || !head->next) return head;

        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;

        return newHead;
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
    ListNode* head = createList({0,1,4,-2});

    ListNode* ans = s1.reverseList(head);
    printList(ans);
    cout << endl;
    
    return 0;
}