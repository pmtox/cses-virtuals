#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    bool isok = false;
    map<ll , bool>mpp;
    for(auto it : arr){
        mpp[it] = true;
    }
    for(ll i = 0 ; i < n ; i++){
        if(mpp.find(arr[i] - k) != mpp.end()){
            isok = true;
            break;
        }
    }
    cout<<((isok) ? "YES" : "NO")<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}