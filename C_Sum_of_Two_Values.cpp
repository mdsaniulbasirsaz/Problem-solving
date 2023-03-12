#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // create a hashmap to keep track of seen values
    unordered_map<int, int> seen;

    for (int i = 0; i < n; i++) {
        // check if x - a[i] is already in seen
        if (seen.find(x - a[i]) != seen.end()) {
            // found a pair whose sum is x
            cout << seen[x - a[i]]+1 << " " << i+1 << endl;
            return 0;
        } else {
            // add a[i] to seen
            seen[a[i]] = i;
        }
    }

    // loop completed without finding a pair
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
