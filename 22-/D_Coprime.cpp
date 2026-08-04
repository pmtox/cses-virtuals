#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
vector<ll>pairsss[1000];
void solve(){
    ll n;cin>>n;
    vector<ll>arr(1001 , 0);
    for(int i = 1 ; i <= n ; i++){
        ll x = 0 ; cin>>x;
        arr[x] = i;
    }
    ll ans = -1;
    for(ll i = 0 ; i <= 1000 ; i++){
        if(arr[i] == 0){
            continue;
        }
        for(ll it : pairsss[i]){
            if(arr[it] != 0){
                ans = max(ans , arr[i] + arr[it]);
            }
        }
    }
    cout<<ans<<endl;
}
void pairr(){
    IOS;
    for(ll i = 1 ; i <= 1000 ; i++){
        for(ll j = 1 ; j <= 1000 ; j++){
            if(__gcd(i , j) == 1){
                pairsss[i].push_back(j);
            }
        }
    }
}
int32_t main(){
    ll t;cin>>t;
    while(t--){ 
        pairr();
        solve();
    }
    return 0;
}