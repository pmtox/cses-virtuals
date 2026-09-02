#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n;
void solve(){
    cin>>n;
    ll eve = n / 2;
    if(n % 2){
        cout<<(eve * 30) + 20<<endl;
    }
    else{
        cout<<eve*30<<endl;
    }
}
int32_t main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}