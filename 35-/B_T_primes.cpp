#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll Mx = 1000001;
vector<ll>sieves(Mx , true);
void sievearr(){
    sieves[0] = false;
    sieves[1] = false;
    for(ll i = 2 ; i * i < Mx ; i++){
        if(sieves[i]){
            for(ll j = i * i ; j < Mx ; j+=i){
                sieves[j] = false;
            }
        } 
    }
}
void solve(){
    ll n;
    cin>>n;
    ll s = round(sqrt(n));
    if(s * s == n && s < Mx && sieves[s]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    IOS;
    sievearr();
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}