#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
// bool isP(ll x){
//     if(x < 2) return false;
//     for(ll i = 2 ; 1LL* i * i <= x ; i++){
//         if(x % i == 0){
//             return false;
//         }
//     }
//     return true;
// }
void solve(){
    ll n , m , x , y;
    cin>>n>>m>>x>>y;
    vector<ll>a(x) , b(y);
    vector<ll>an(n + m + 2) , ab(n + m + 2);
    for(ll i = 0 ; i < x ; i++){
        cin>>a[i];
        an[a[i]]++;
    }
    for(ll i = 0 ; i < y ; i++){
        cin>>b[i];
        ab[b[i]]++;
    }
    vector<pair<ll , ll>>vp;
    for(ll i = 1 ; i <=  n + m ; i++){
        if(an[i] || ab[i]){
            ll t;
            if(an[i] && ab[i]){
                t = 0;
            }
            else if(an[i]){
                t = 1;
            }
            else{
                t = 2;
            }
            vp.push_back({i , t});
        }
    }
    // for(auto it : vp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    sort(vp.rbegin() , vp.rend());
    // for(auto it : vp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    ll ans = 0;
    ll lim = n + m - 1;
    ll cnta = 0 , cntb = 0;
    ll cnt = 0;
    for(auto it : vp){
        if(cnt == lim){
            break;
        }
        if(it.second == 0){
            ans += it.first;
            cnt++;
        }
        else if(it.second == 1){
            if(cnta < n){
                ans += it.first;
                cnta++;
                cnt++;
            }
        }
        // cout<<cnt<<endl;
        // cout<<cnta<<endl;
        else{
            if(cntb < m){
                ans += it.first;
                cntb++;
                cnt++;
            }
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}