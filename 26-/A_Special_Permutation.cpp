#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    cout<<n<<" ";
    for(int i = 1 ; i < n ; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}