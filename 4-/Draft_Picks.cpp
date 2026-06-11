#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;cin>>n>>k;
    int p1 = 0 , p2 = 0;
    if(k >= 1){
        p1 += k;
    }
    for(int i = 2 * n ; i <= k ; i += 2 * n){
        p1 += k - i + 1;
        if(i + 1 <= k){
            p1 += k - (i + 1) + 1;
        }
    }
    for(int i = n ; i <= k ; i += 2 * n){
        p2 += k - i + 1;
        if(i + 1 <= k){
            p2 += k - (i + 1) + 1;
        }
    }
    cout<<max(p1 , p2)<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}