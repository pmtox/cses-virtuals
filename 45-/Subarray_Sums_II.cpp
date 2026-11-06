#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t seed =
            chrono::steady_clock::now().time_since_epoch().count();

        return splitmix64(x + seed);
    }
};
void solve(){
    ll n , k;
    cin>>n>>k;
    unordered_map<ll , ll , custom_hash> mpp;
    mpp.reserve(2 * n);
    ll sum = 0 ;
    ll ans = 0;
    mpp[0] = 1;
    for(ll i = 0 ; i < n ; i++){
        ll x;cin>>x;
        sum += x;
        auto it = mpp.find(sum - k);
        if(it != mpp.end()){
            ans += it->second;
        }
        mpp[sum]++;    
    }
    cout<<ans<<endl;

}
int32_t main(){
    IOS;
    solve();
    return 0;
}