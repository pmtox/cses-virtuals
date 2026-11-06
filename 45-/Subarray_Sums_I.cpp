#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    unordered_map<ll , ll> mpp;
    ll sum = 0 ;
    ll ans = 0;
    mpp[0] = 1;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        ans += mpp[sum - k];
        mpp[sum]++;    
    }
    cout<<ans<<endl;

}
int32_t main(){
    IOS;
    solve();
    return 0;
}