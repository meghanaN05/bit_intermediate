#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
if(b>a){
    swap(a,b);
}
bool flag=true;
int ans=0;
for(int i=n-1;i>=0;i--){
    int temp1=a&(1<<i);
    int temp2=b&(1<<i);
    if(temp1==temp2){
        if(temp1==0){
            ans|=(1<<i);
        }
    }
    else{
        if(flag==true){
            flag=false;
        }
        else{
            if(temp2==0){
                ans|=(1<<i);
            }
        }
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