#include <bits/stdc++.h>
using namespace std;

long long max_product(vector<long long> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    if (arr[0] >= 0 || arr[n - 1] <= 0) {
        return arr[n - 1] * arr[n - 2] * arr[n - 3];
    } else {
        int prod1 = arr[0] * arr[1] * arr[n - 1];
        int prod2 = arr[n - 3] * arr[n - 2] * arr[n - 1];
        return max(prod1, prod2);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << max_product(arr) << endl;
    }
    return 0;
}