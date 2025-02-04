#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_so_far = arr[0]; 
    cout << "1 ";           

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_so_far) {
            cout << "1 ";
            max_so_far = arr[i]; 
        } else {
            cout << "0 ";
        }
    }
    cout << endl;
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
