#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll x , y;cin>>x>>y;
    ll s = x + y;
    if((x & s) == x){
        cout<<s<<" "<<0<<endl;
        return ;
    }

    ll a = 0;
    bool isok = false;
    for(ll i = 30 ; i >= 0 ; i--){
        ll lb = (x >> i) & 1LL;
        ll ub = (s >> i) & 1LL;
        if(isok){
            if(ub){
                a |= (1LL << i);
            }
        }
        else{
                if(lb == 0){
                    continue;
                }
                if(ub == 1){
                    a |= (1LL << i);
                }
                else{
                    isok = true;
                    for(ll j = i - 1 ; j >= 0 ; j--){
                        if((s >> j) & 1LL){
                            a |= (1LL << j);
                        }
                    }
                }
            }
    }
    cout<<s<<" "<<x - a<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}