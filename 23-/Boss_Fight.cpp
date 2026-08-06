#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    map<ll , ll>mpp;
    ll sum = 0;
    for(int i = 0 ; i < n ; i++){
        ll x;cin>>x;
        mpp[x]++;
        sum += x;
    }
    ll maxVal = 0;
    ll maxFq = 0;
    for(auto it : mpp){
        if(maxFq < it.second){
            maxFq = it.second;
            maxVal = it.first;
        }
    }
    ll other = n - maxFq;
    if(maxFq <= other + 1){
        cout<<sum<<endl;
    }
    else{
        ll ans = sum - maxVal * maxFq;
        ans += maxVal * (other + 2);
        cout<<ans<<endl;
    }
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}