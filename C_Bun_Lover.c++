#include <bits/stdc++.h>
using namespace std;
void choco( )
{
      long long choco[10**9+1];
    choco[4] = 10;
    for (int i = 5; i < 10**9+1; i++) {
        choco[i] = 2 * choco[i-1] + 4 * (i-1);
    }
}

int main() {
    int t;
    cin >> t;
    // answer the queries
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << choco[n] << endl;
    }
    
    return 0;
}
 
#