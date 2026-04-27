#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll x , y;
    cin>>x>>y;
    if(y == 2 * x) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    }
}
int main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}