#include <bits/stdc++.h>
using namespace std;

class MyHashSet 
{
    public:
        struct ListNode 
        {
            int val;
            ListNode* next;
            ListNode(int x) : val(x), next(nullptr) {}
        };

        int size = 1000;                   // bucket size
        vector<ListNode*> table;           // array of linked list heads

        MyHashSet() 
        {
            table.resize(size, nullptr);
        }

        int hash(int key) 
        {
            return key % size;
        }

        void add(int key) 
        {
            int index = hash(key);
            ListNode* curr = table[index];

            // already present check
            while (curr) {
                if (curr->val == key) return; 
                curr = curr->next;
            }

            // insert at head
            ListNode* newNode = new ListNode(key);
            newNode->next = table[index];
            table[index] = newNode;
        }

        void remove(int key) 
        {
            int index = hash(key);
            ListNode* curr = table[index];
            ListNode* prev = nullptr;

            while (curr) 
            {
                if (curr->val == key) 
                {
                    if (prev) prev->next = curr->next;
                    else table[index] = curr->next;
                    delete curr;
                    return;
                }
                prev = curr;
                curr = curr->next;
            }
        }

        bool contains(int key) 
        {
            int index = hash(key);
            ListNode* curr = table[index];
            while (curr) 
            {
                if (curr->val == key) return true;
                curr = curr->next;
            }
            return false;
        }
};

// Driver Code
int main() {
    MyHashSet m1;
    vector<string> callType = {"MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"};
    vector<int> nums = {-1, 1, 2, 1, 3, 2, 2, 2, 2}; // -1 dummy for constructor

    for (int i = 0; i < callType.size(); i++) {
        if (callType[i] == "MyHashSet") {
            cout << "MyHashSet Created" << endl;
        } 
        else if (callType[i] == "add") {
            m1.add(nums[i]);
            cout << "Added " << nums[i] << endl;
        } 
        else if (callType[i] == "remove") {
            m1.remove(nums[i]);
            cout << "Removed " << nums[i] << endl;
        } 
        else if (callType[i] == "contains") {
            cout << "Contains " << nums[i] << " ? " << (m1.contains(nums[i]) ? "true" : "false") << endl;
        }
    }
    return 0;
}
