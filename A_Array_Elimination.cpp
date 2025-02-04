#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> bit_count(30, 0);

    for (int num : a) {
        for (int i = 0; i < 30; ++i) {
            if (num & (1 << i)) {
                bit_count[i]++;
            }
        }
    }

    int gcd_all = 0;
    for (int count : bit_count) {
        if (count > 0) {
            gcd_all = gcd(gcd_all, count);
        }
    }

    vector<int> result;
    for (int k = 1; k <= n; ++k) {
        if (gcd_all % k == 0) {
            result.push_back(k);
        }
    }

    for (int k : result) {
        cout << k << " ";
    }
    cout << endl;

   
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    while (k--) {
        solve();
    }

    return 0;

}
