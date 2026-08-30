#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , m;cin>>n>>m;
    vector<vector<ll>>arr(n , vector<ll>(m));
    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++){
            cin>>arr[i][j];
        }
    }
    ll ans = 0;
    for(ll i = 0 ; i < m ; i++){
        vector<ll>a;
        for(ll j = 0 ; j < n ; j++){
            a.push_back(arr[j][i]);
        }
        sort(a.begin() , a.end());
        ll sum = 0;
        ll cnt = 0;
        for(auto it : a){
            ans += it * cnt - sum;
            cnt++;
            sum += it;
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