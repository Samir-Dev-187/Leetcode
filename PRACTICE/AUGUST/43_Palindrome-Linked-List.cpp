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
        bool isPalindrome(ListNode* head) 
        {
            vector<int> nums;
            ListNode* temp = head;
            while (temp)
            {
                nums.push_back(temp->val);
                temp = temp->next;
            }

            int st = 0;
            int end = nums.size()-1;
            while (st < end)
            {
                if (nums[st] != nums[end]) return false;
                st++;
                end--;
            }  
            
            return true;
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
    ListNode* head = createList({1,2,2,1});

    cout << s1.isPalindrome(head);
    cout << endl;

    return 0;
}