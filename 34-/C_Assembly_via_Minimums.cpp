// (n * n (n - 1)) / 2
// SIZE OF ARRAY
// (n * n (n - 1)) / 2 -> number of elements

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    ll m = (n * (n - 1)) / 2;
    vector<ll>arr(m);
    for(ll i = 0 ; i < m ; i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    ll x = n - 1 , i = 0;
    while(x > 0){
        cout<<arr[i]<<" ";
        i += x;
        x--;
    }
    cout<<1000000000<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}