#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    
     int n;
        cin >> n;
        vector<long long> a(n), b(n);

      
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        set<long long>ai,bi;

        
      for(int i=0;i<n;i++){
        ai.insert(a[i]);
         bi.insert(b[i]);
      }

       
        if (ai.size()+bi.size()>3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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