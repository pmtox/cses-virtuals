#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , k;cin>>n>>k;
    vector<ll>arr(n);
    ll a , b , c;
    cin>>arr[0]>>a>>b>>c;
    for(ll i = 1 ; i < n ; i++){
        arr[i] = (1LL * a * arr[i - 1] + b) % c;
    }
    ll sum = 0;
    for(ll i = 0 ; i < k ; i++){
        sum += arr[i];
    }
    ll ans = sum;
    for(ll i = k ; i < n ; i++){
        sum += arr[i] - arr[i - k];
        ans ^= sum;
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}