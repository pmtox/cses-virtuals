#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    if((~n & 1)){
        for(ll i = n ; i >= 1 ; i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<(n / 2) + 1<<" ";
        for(ll i = (n / 2) ; i >= 1 ; i--){
            cout<<i<<" ";
        }
        for(ll i = n ; i > ((n / 2) + 1) ; i--){
            cout<<i<<" ";
        }
        cout<<endl;
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