#include <iostream>
#include <algorithm>

int main() {
    // Read the number of test cases
    int t;
    std::cin >> t;
    // Process the test cases
    while (t--) {
        // Read the size of the array and Baltic's favorite number
        int n, m;
        std::cin >> n >> m;
        // Read the array
        int a[n];
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        // Find the minimum number of required operations
        int operations = 0;
        for (int i = 0; i < m; i++) {
            if (a[i] < 0) {
                operations++;
                a[i] = -a[i];
            }
        }
        // Print the result
        std::cout << operations << std::endl;
    }
    return 0;
}
