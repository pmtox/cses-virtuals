#include<bits/stdc++.h>
using namespace std;
#define ll int
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , x;cin>>n>>x;
    ll res = 0;
    vector<ll>a[3];
    for(ll i = 0 ; i < 3 ; i++){
        ll s = 0;
        a[i].push_back(s);
        for(ll j = 0 ; j < n ; j++){
            ll k;cin>>k;
            if((s | k) != s){
                s |= k;
                a[i].push_back(s);
            }
        }
    }
    bool ans = 0;
    for(ll i : a[0]){
        for(ll j : a[1]){
            for(ll k : a[2]){
                if((i | j | k) == x){
                    ans = 1;
                }
            }
        }
    }
    cout<<(ans ? "Yes" : "No")<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}