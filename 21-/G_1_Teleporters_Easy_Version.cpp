#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
// #define isok(fxn) (fxn ? "YES" : "NO")
void solve(){
    ll n , c;
    cin>>n>>c;
    vector<ll>arr;
    for(int i = 1 ; i <= n ; i++){
        ll x; cin>>x;
        arr.push_back(i + x);
    }
    sort(arr.begin() , arr.end());
    ll ans = 0;
    ll i = 0;
    while(i < n && arr[i] <= c){
        c -= arr[i];
        ans++;
        i++;
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}