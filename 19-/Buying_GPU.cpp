#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll x , y , z;
    cin>>x>>y>>z;
    if(x <= 0){
        cout<<0<<endl;
        return ;
    }
    else if(z <= y){
        cout<<-1<<endl;
        return ;
    }
    ll cnt = z - y;
    cout<<(x + cnt - 1) / cnt<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}