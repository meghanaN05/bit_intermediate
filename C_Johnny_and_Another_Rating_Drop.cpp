#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int ans=0;
    while(n>0){
        ans+=n;
        n=n/2;
    }
    cout<<ans<<endl;
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