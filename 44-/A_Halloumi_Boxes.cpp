#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , q;
    cin>>n>>q;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    ll k = q;
    bool isok = true;
    for(ll i = 1 ; i < n ; i++){
        if(arr[i - 1] > arr[i]){
            isok = false;
            break;
        }
    }
    cout<<((isok || q >= 2) ? "YES" : "NO")<<endl;
}
int32_t main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}