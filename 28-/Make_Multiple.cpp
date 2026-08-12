#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
bool isok(ll k){
    return k;
}
void solve(){
    ll n; cin>>n;
    if(n % 3 == 0){
        cout<<0<<endl;
        return ;
    }
    if(isok((n + 1) % 3 == 0)){
        cout<<1<<endl;
        return ;
    }
    ll num = n + (5 - n % 5);
    if(num % 3 == 0){
        cout<<1<<endl;
        return ;
    }
    cout<<2<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}