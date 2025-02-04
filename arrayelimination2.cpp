#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>validk(n+1,1);
    for(int i=0;i<30;i++){
        vector<int>validfactors(n+1);
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]&(1<<i)){
             cnt++;
            }
            
        }
        for(int j=1;j<=n;j++){
            if(cnt%j==0){
                validfactors[j]=1;
            }
        }
        for(int j=1;j<=n;j++){
            validk[j]=validk[j]&validfactors[j];
        }

    }
    for(int i=1;i<=n;i++){
        if(validk[i]){
            cout<<i<<" ";
        }
    }
      cout<<endl;
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