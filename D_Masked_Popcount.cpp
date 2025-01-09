#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl '\n'


#define mod (ll)(998244353)

 int main() {

    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int i = 0; i < 60; i++) {
        if (m & (1LL << i)) {
            ll temp = n;
            temp >>= (i + 1);
            temp *= (1LL << i);
            temp%=mod;
            if (n & (1LL << i)) {
                temp += ((n % (1LL << i)) + 1);
                temp%=mod;
            }
            ans += temp;
            ans%=mod;
        }
        
    }
    cout << ans << endl;
    return 0;

}