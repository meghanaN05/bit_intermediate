#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int p,q,r;
    cin>>p>>q>>r;
    int ans=1;
    for(int i=0;i<20;i++){
        int count=0;
        if( p &(1<<i)) count++;
        if( q &(1<<i)) count++;
        if( r &(1<<i)) count++;
        if(count==1){
            cout<<"0"<<endl;
            return;
        }
        if(count==3){
            ans*=4;
        }
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