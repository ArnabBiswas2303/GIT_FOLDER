#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long ans = 1;
        for (int i = 2; i <= n; i++) {
            ans = (2 * (2 * i - 1)) / (i + 1);
        }
        cout << ans << endl;
    }
    return 0;
}