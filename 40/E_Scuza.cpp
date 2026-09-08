#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll bin(vector<ll>&prefMax , ll val , ll n){
    ll l = 0 , r = n - 1;
    ll ans = -1;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(prefMax[mid] <= val){
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
    ll n , q;cin>>n>>q;
    vector<ll>a(n);
    vector<ll>k(q);
    for(ll i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(ll i = 0 ; i < q ; i++){
        cin>>k[i];
    }
    vector<ll>prefSum(n) , prefMax(n);
    prefSum[0] = a[0];
    prefMax[0] = a[0];
    for(ll i = 1 ; i < n ; i++){
        prefMax[i] = max(prefMax[i - 1] , a[i]);
        prefSum[i] = prefSum[i - 1] + a[i];
    }
    for(ll i = 0 ; i < q ; i++){
        ll val = k[i];
        ll ind = bin(prefMax , val , n);

        if(ind == -1){
            cout<<0<<" ";
        }
        else{
            cout<<prefSum[ind]<<" ";
        }
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}