#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll l , r;cin>>l>>r;
    if((l % 2 == 0) || (r % 2 == 0)){
        cout<<"Yes"<<endl;
        return;
    }
    ll isok = r - l;
    if(isok > 1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}