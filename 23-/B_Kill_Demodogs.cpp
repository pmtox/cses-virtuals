#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll mod = 1e9 + 7;
void solve(){
    ll n;cin>>n;
    ll maxi = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;
    cout<<maxi<<endl;
}   
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}