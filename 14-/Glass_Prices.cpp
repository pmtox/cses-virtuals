#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    ll n1 , n2;
    cin>>n1>>n2;
    ll k = 2 * n1;
    if(k < n2){
        cout<<"PLASTIC"<<endl;
    }else{
        cout<<"METAL"<<endl;
    }
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}