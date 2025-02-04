// #include <bits/stdc++.h>

// using namespace std;
// #define int long long
// #define endl '\n'

// void solve() {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     int l=0;
//     int r=n-1;
//     int ans=n;
//     while (s[l] !=s[r] && ans>0){
//         l++;
//         r--;
//         ans-=2;
//     }
//     cout<<ans<<endl;

// }

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int k;
//     cin >> k;

//     while (k--) {
//         solve();
//     }

//     return 0;

// }
#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    string str;
    cin>>str;
    
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    
    int f=0;
    int l=n-1;
    
    while(str[f]!=str[l] && f<n-1 && l>0 && l>=f){
        f++;
        l--;
    }
    
        cout<<l-f+1<<endl;

    
    
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