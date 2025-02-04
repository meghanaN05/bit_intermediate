#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == k) {
        vector<ll> b(k / 2);
        for (ll i = 1; i < n; i += 2) {
            b[i / 2] = a[i];
        }

        for (ll i = 0; i < n / 2; i++) {
            if (b[i] != i + 1) {
                cout << i + 1 << "\n";
                return;
            }
        }
        cout << n / 2 + 1 << "\n";
    } else {
        ll count = 0;
        for (ll i = 1; i <= n - k + 1; i++) {
            if (a[i] == 1) count++;
        }

        if (count == n - k + 1) {
            cout << 2 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
