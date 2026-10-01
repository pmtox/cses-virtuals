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
    sort(arr.begin() , arr.end());
    bool isok = true;
    for(ll i = 1 ; i < n ; i++){
        if(arr[i] - arr[i - 1] > 1){
            isok = false;
        }
    }
    if(isok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int32_t main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}