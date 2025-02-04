#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

int countinversions(string &s)
{
    int ones=0;
    int inv=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        ones++;
        else
        inv+=ones;
    }
    return inv;
}

void solve() {
    
    int n,x,k;
    cin>>n>>x>>k;
    
    string s;
    cin>>s;
    int inv=countinversions(s);
    if(inv<=x && inv%k==0)
    cout<<1<<endl;
    else
    cout<<2<<endl;
    
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