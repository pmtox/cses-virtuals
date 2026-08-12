#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
// bool isok(ll k){
//     return k;
// }
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    ll sum = 0;
    ll odd = 0;
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
        sum += arr[i];
        if(arr[i] & 1){
            odd++;
        }
    }
    ll ans;
    if(sum % 2 == 0){
        ans = sum - odd / 2;
    }
    else{
        ans = (odd - 1) / 2;
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