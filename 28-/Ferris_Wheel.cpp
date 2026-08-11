#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , x;
    cin>>n>>x;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    ll maxi = 0;
    ll l = 0 , r = n - 1;
    while(l <= r){
        if(arr[l] + arr[r] <= x){
            l++;
        }
        r--;
        maxi++;
    }
    cout<<maxi<<endl;
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}