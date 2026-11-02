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
    ll ans = 0;
    vector<ll>v(n);
    #define pref v
    #define suff v
    for(ll mid = k - 1; mid < n ; mid += k){
        suff[mid] = arr[mid];
        for(ll i = mid - 1; i >= mid - k + 1 ; i--){
            suff[i] = (suff[i + 1] | arr[i]);
        }
        if(mid + 1 < n){
            pref[mid + 1] = arr[mid + 1];
        }
        for(ll i = mid + 2 ; i < n && i <= mid + k ; i++){
            pref[i] = (pref[i - 1] | arr[i]);
        }
        for(ll i = mid - k + 1; i <= mid && i <= n - k ; i++){
            if(i == mid - k + 1){
                ans ^= suff[i];
            }
            else{
                ans ^= suff[i] | pref[i + k - 1];
            }
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}