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
    ll gcd1 = 0 , gcd2 = 0;
    for(ll i = 0 ; i < n ; i++){
        if(i & 1){
            gcd1 = __gcd(arr[i] , gcd1);
        }
        else{
            gcd2 = __gcd(arr[i] , gcd2);
        }
    }
    bool isok = true;
    for(ll i = 1 ; i < n ; i+=2){
        if(arr[i] % gcd2 == 0){
            isok = false;
            break;
        }
    }
    if(isok){
        cout<<gcd2<<endl;
        return;
    }
    isok = true;
    for(ll i = 0 ; i < n ; i+=2){
        if(arr[i] % gcd1 == 0){
            isok = false;
            break;
        }
    }
    if(isok){
        cout<<gcd1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}