#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
/// @@@@

void solve(){
    ll x , y , k;cin>>x>>y>>k;
    ll diff = y - x;
    if(diff == 0){
        cout<<0<<endl;
        return;
    }
    ll ans = 0;
    ll n = max(0LL , min(k , diff - x + 1));
    for(ll i = 0 ; i < n ; i++){
        ans += diff % (x + i);
    }
    ans += (k - n) * diff;
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}