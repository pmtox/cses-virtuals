#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , m;cin>>n>>m;
    ll ans = (n / m) + 1;
    if(n % m == 0){
        cout<<0<<endl;
        return;
    }
    else{
        cout<<(ans * m) - n<<endl;
        return ;
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