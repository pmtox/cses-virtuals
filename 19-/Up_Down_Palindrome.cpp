#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(NULL);
#define iso(fxn) (fxn ? "Yes" : "No")
void solve(){
    ll n ; cin>>n;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    bool isok = true;
    ll ans = -1;
    ll l = LLONG_MIN;
    ll r = LLONG_MAX;

    for(int i = 0 ; i < n / 2 ; i++){
        ll a = arr[i];
        ll b = arr[n - 1 - i];
        ll diff = abs(a - b);
        if(diff > 2 || diff % 2){
            isok = false;
            break;
        }
        if(diff == 2){
            ll mn = min(a , b);
            ll mx = max(a , b);
            l = max(l , mn);
            r = min(r , mx - 1);
        }
    }
    isok &= (l <= r);
    cout<<iso(isok)<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}