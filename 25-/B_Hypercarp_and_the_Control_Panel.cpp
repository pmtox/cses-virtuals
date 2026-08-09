#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    ll bestAns = 1;
    for(ll i = 0 ; i < n - 1 ; i++){
        bestAns += (arr[i] != arr[i + 1]);
    }
    ll maxi = 0;
    for(ll i = 0 ; i < n - 1 ; i++){
        if(arr[i] == arr[i + 1]) continue;
        ll delta = 0;
        if(i > 0){
            delta += (arr[i - 1] != arr[i + 1]) - (arr[i - 1] != arr[i]);
        }
        if(i + 2 < n){
            delta += (arr[i] != arr[i + 2]) - (arr[i + 1] != arr[i + 2]);
        }
        maxi = max(maxi , delta);
    }
    cout<<maxi + bestAns<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}