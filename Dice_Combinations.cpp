#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
vector<ll>memoo;
ll rec(ll n){
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }
    if(memoo[n] != -1){
        return memoo[n];
    }
    ll ans = 0;
    for(ll j = 1 ; j <= 6 ; j++){
        ans += rec(n - j);
    }
    memoo[n] = ans;
    return memoo[n];
}
void solve(){
    ll n;
    cin>>n;
    memoo.resize(n + 1 , 0);
    // cout<<rec(n)<<endl;
    memoo[0] = 1;
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++){
        for(ll j = 1 ; j <= 6 ; j++){
            if(i - j >= 0){
                memoo[i] += memoo[i - j];
            }
        }
    }
    cout<<memoo[n]<<endl;
}
int32_t main(){
    solve();
    return 0;
}