#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    ll n , c;cin>>n>>c;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    ll l = 0 , r = 1e9 , ans = -1;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        ll sum_all = 0;
        for(int i = 0 ; i < n ; i++){
            sum_all += (arr[i] + 2 * mid) * (arr[i] + 2 * mid);
            if(sum_all > c) break;
        }
        if(sum_all <= c){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
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