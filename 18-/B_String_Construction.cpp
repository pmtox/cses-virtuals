#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , k;cin>>n>>k;
    if(n > 1 && k == n - 1){
        cout<<-1<<endl;
        return;
    }
    k = n - k;
    ll cnt0 = (n + 1) / 2 , cnt1 = n / 2;
    for(int i = 1 ; i <= k ; i++){
        if(i & 1){
            if(i + 2 > k){
                while(cnt0--) cout<<0;
            }
            else{
                --cnt0;
                cout<<0;
            }
        }
        else{
            if(i + 2 > k){
                while(cnt1--){
                    cout<<1;
                }
            }
            else{
                --cnt1;
                cout<<1;
            }
        }
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