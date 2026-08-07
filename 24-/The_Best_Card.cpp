#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
bool isP(ll x){
    if(x < 2) return false;
    for(ll i = 2 ; 1LL* i * i <= x ; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
void solve(){
    ll n;cin>>n;
    ll ans = 0;
    bool isok = isP(n + 1);
    // for(ll i = 2 ; i <= n + 1 ; i++){
    //     if((i % (i + 1)) != 0){
    //         isok = false;
    //     }
    // }
    cout<<(isok ? "YES" : "NO")<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}