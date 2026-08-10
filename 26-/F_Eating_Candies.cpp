#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<ll>pref(n , 0) , suff(n , 0);
    pref[0] = arr[0];
    suff[n - 1] = arr[n - 1];
    for(ll i = 1 ; i < n ; i++){
        pref[i] = pref[i - 1] + arr[i];
    }
    for(ll i = n - 2 ; i >= 0 ; i--){
        suff[i] = suff[i + 1] + arr[i];
    }
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++){
        ll l = i + 1 , r = n - 1;
        while(l <= r){
            ll mid = l + (r - l) / 2;
            if(suff[mid] == pref[i]){
                ans = max(ans , (i + 1)+(n - mid));
                break;
            }
            else if(suff[mid] > pref[i]){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
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