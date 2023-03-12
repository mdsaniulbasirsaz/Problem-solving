#include <iostream>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int a_min = 200001;
    int a_max = 0;
    int max_profit = 0;

    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;

        if (ai < a_min) {
            a_min = ai;
        }
        if (ai > a_max) {
            a_max = ai;
        }
    }

    max_profit = (b / a_min) * a_max;
    cout << max_profit << endl;

    return 0;
}
