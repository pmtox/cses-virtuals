#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll k , l , m , n , d;
    cin>>k>>l>>m>>n>>d;
    vector<bool>pref(d + 1 , 0);
    for(ll i = k ; i <= d ; i+=k){
        pref[i] = 1;
    }
    for(ll i = l ; i <= d ; i+=l){
        pref[i] = 1;
    }
    for(ll i = m ; i <= d ; i+=m){
        pref[i] = 1;
    }
    for(ll i = n ; i <= d ; i+=n){
        pref[i] = 1;
    }
    ll cnt = 0;
    for(ll i = 1 ; i <= d ; i++){
        if(pref[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}