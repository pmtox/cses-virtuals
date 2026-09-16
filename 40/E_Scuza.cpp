#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
ll binaryS(ll k , vector<ll>&prefMax , ll n){
    ll l = 0 , r = n - 1;
    ll ans = -1;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(prefMax[mid] <= k){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return ans;
}
void solve(){
    ll n , m ; cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(m);
    for(ll i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(ll i = 0 ; i < m ; i++){
        cin>>b[i];
    }
    // 1 2 1 5
    // 1 2 4 9 10
    vector<ll>prefSum(n) , prefMax(n);
    prefMax[0] = a[0];
    prefSum[0] = a[0];
    for(ll i = 1 ; i < n ; i++){
        prefSum[i] = prefSum[i - 1] + a[i];
        prefMax[i] = max(prefMax[i - 1] , a[i]);
    }
    for(ll i = 0 ; i < m ; i++){
        ll k = b[i];
        ll idx = binaryS(k , prefMax , n);
        if(idx == -1){
            cout<<0<<" ";
        }
        else{
            cout<<prefSum[idx]<<" ";
        }
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;while(t--){
        solve();
    }
    return 0;
}