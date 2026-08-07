#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    ll ans = (1 << 30) - 1;
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] != i){
            ans &= arr[i];
        }
    }
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