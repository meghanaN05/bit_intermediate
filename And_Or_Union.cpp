#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
  vector<int>bits(32,0);
  for(int i=0;i<32;i++){
    for(int j=0;j<n;j++){
        if(arr[j] & (1<<i)){
            bits[i]++;
        }
    }
  }
  int ans=0;
  for(int i=0;i<32;i++){
    if(bits[i]>1){
        ans +=(1<<i);
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