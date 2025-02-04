#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    string A, B;
    cin >> A >> B;

    int count0 = 0; 
    int count1 = 0; 

    for (int i = 0; i < n; i++) {
        if (A[i] == '1' && B[i] == '1') {
            count0++;
        } else if (A[i] == '1' || B[i] == '1') {
            count1++;
        }
    }

   
    if (count0 % 2 == 1) {
        cout << "YES" << endl;
    } else if (count1 > 0 && count0 % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k; // Number of test cases
    cin >> k;

    while (k--) {
        solve();
    }

    return 0;
}
