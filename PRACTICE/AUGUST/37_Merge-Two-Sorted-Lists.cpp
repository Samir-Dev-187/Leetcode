#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1); // dummy node
        ListNode* tail = &dummy;

        while(list1 != NULL && list2 != NULL) {
            if(list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // attach remaining nodes
        if(list1 != NULL) tail->next = list1;
        if(list2 != NULL) tail->next = list2;

        return dummy.next; // head of merged list
    }
};

// 🔹 Helper function to create linked list from vector
ListNode* createList(vector<int> vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (int i = 1; i < vals.size(); i++) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

// 🔹 Helper function to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Solution s1;

    // test inputs
    ListNode* list1 = createList({1, 2, 4});
    ListNode* list2 = createList({1, 3, 4});

    // merge
    ListNode* merged = s1.mergeTwoLists(list1, list2);

    // print
    printList(merged);

    return 0;
}