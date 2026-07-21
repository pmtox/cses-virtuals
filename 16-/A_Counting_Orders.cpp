#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
const ll mod = 1e9 + 7;
void solve(){
    ll n;cin>>n;
    vector<ll>a(n) , b(n);
    for(ll i = 0 ; i < n ; i++) cin>>a[i];
    for(ll i = 0 ; i < n ; i++) cin>>b[i];
    sort(a.begin() , a.end());
    sort(b.begin() , b.end(), [](ll a , ll b){
        return a > b;
    });
    ll ans = 1;
    for(ll i = 0 ; i < n ; i++){
        ll temp = upper_bound(a.begin() , a.end() , b[i]) - a.begin();
        ll cnt = a.size() - temp;
        ans = ans * max(cnt - i , 0LL) % mod;
    }
    cout<<ans<<endl;
}
int32_t main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}