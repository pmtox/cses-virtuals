#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    ll max_so_far = 0;
    ll maxi = arr[0];
    for(ll i = 1 ; i < n ; i++){
        ll diff;
        if(arr[i] < maxi){
            diff = maxi - arr[i];
            max_so_far += diff;
        }
        else{
            maxi = arr[i];
        }
    }
    cout<<max_so_far<<endl;
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}