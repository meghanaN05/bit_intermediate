#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    
    ll b, c, d;
    cin >> b >> c >> d;

    ll a = 0;
    bool valid = true;

    for (ll i = 0; i < 62; i++) {
        ll bit_b = (b >> i) & 1;
        ll bit_c = (c >> i) & 1;
        ll bit_d = (d >> i) & 1;

        
        if ((bit_b && !bit_c && !bit_d) || (!bit_b && bit_c && bit_d)) {
            valid = false;
            break;
        }

      
        if (bit_b && bit_c) {
            a |= (!bit_d) << i;
        } else {
            a |= bit_d << i;
        }
    }

    cout << (valid ? a : -1) << "\n";




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