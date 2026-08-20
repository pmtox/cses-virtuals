#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < n ; j++){
            cout<<(i ^ j);
            if(j < n){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int32_t main(){
    IOS;
    solve();
    return 0;
}