#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'



signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[300000];
    arr[0]=0;
    for(int i=1;i<300000;i++){
        arr[i]=(arr[i-1])^i;
    }
    
    int k;
    cin >> k;
    while (k--) {
    int a,b;
    cin>>a>>b;
   
 int xori= arr[a-1];
    if(xori==b){
        cout<<a<<endl;
    }
    else if((xori^b)==a){
        cout<<a+2<<endl;
    }
    else {
        cout<<a+1<<endl;
    }
    }

    return 0;

}