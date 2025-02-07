#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
     int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> good(n, true);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

  
    for (int shift = 29; shift >= 0; shift--) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (good[i] && ((a[i] >> shift) & 1)) {
                count++;
            }
        }
        if (count >= 2) {
            for (int i = 0; i < n; i++) {
                if (good[i] && !((a[i] >> shift) & 1)) {
                    good[i] = false; 
                }
            }
        }
    }

    vector<int> candidates;
    for (int i = 0; i < n; i++) {
        if (good[i]) {
            candidates.push_back(a[i]);
            if (candidates.size() == 2) break;
        }
    }

    if (candidates.size() < 2) {
       
        candidates.clear();
        candidates.push_back(a[0]);
        candidates.push_back(a[1]);
    }

    int x = candidates[0], y = candidates[1];
    long long new_sum = sum - (x + y) + (x ^ y);

    cout << new_sum << endl;
    
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


   

    