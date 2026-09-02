#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n , k;
void solve(){
    cin>>n>>k;
    ll sum = 0;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<ll>pref(n + 1 , 0);
    for(ll i = 0 ; i < n ; i++){
        pref[i + 1] = pref[i] + arr[i];
    }
    ll ans = LLONG_MIN;
    for(ll i = 0 ; i <= k ; i++){
        ll r = n - (k - i);
        ll l = i;
        ll rem = pref[r] - pref[l];
        ans = max(ans , rem);
    }
    cout<<ans<<endl;
}
int32_t main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}