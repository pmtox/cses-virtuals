#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n , t;
// vector<ll>arr;
vector<ll>pref;
void solve(){
    ll l , r;
    cin>>l>>r;
    if(l == 1){
        cout<<pref[r - 1]<<endl;
        return;
    }
    cout<<(pref[r - 1] - pref[l - 2])<<endl;
}
int32_t main(){
    IOS;
    cin>>n>>t;
    // arr.resize(n);
    pref.resize(n);
    ll x;cin>>x;
    pref[0] = x;
    for(ll i = 1 ; i < n ; i++){
        ll x;cin>>x;
        pref[i] = pref[i - 1] + x;
    }
    // pref[0] = arr[0];
    // for(ll i = 1 ; i < n ; i++){
    //     pref[i] = pref[i - 1] + arr[i];
    // }
    while(t--){
        solve();
    }
    return 0;
}