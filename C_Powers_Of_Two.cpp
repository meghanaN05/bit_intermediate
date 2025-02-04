#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'



signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int n,k;
    cin>>n>>k;
    if(k>n){
     cout<<"NO"<<endl;
        return 0;
    }
    vector<int>ans;
    for(int i=0;i<32;i++){
        if(n &(1<<i)){
        ans.push_back(1<<i);
        }
    }
    int size=ans.size();
    if(size>k){
        cout<<"NO"<<endl;
        return 0;
    }
    int ptr=0;
    while(size<k){
        while(ans[ptr]==1) 
        ptr++;
        ans[ptr]/=2;
        ans.push_back(ans[ptr]);
        size++;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    

    return 0;

}