#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    map<ll , ll>mpp;
    for(ll i = 0 ; i < n ; i++){
        mpp[arr[i]]++;
    }
    ll ans = 0;
    for(auto i : mpp){
        auto fst = i.first;
        auto sec = i.second;
        ll diff = mpp[fst] - mpp[fst - 1];
        ans += max(0LL , diff);
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