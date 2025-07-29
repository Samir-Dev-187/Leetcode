#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> mp = {{2, 3}, {3, 4}, {6, 1}, {7, 5}};

    auto curr = mp.begin();
    auto next = curr;
    ++next;

    while (next != mp.end()) {
        cout << "Comparing keys: " << curr->first << " and " << next->first << endl;
        cout << "Values: " << curr->second << " vs " << next->second << endl;

        // Example comparison
        if (curr->second < next->second) {
            cout << "Value increased from " << curr->second << " to " << next->second << endl;
        }

        ++curr;
        ++next;
    }

    return 0;
}
