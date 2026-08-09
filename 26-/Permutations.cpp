#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
// ll MOD = 998244353;
void solve(){
    ll n;cin>>n;
    if(n == 2 || n == 3){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    vector<ll>arr;
    ll i = 1 ; ll j = n;
    if(n & 1){
        arr.push_back((n / 2) + 1);
        while(i < j){
            arr.push_back(j);
            arr.push_back(i);
            i++;
            j--;
        }
    }
    else{
        for(ll i = 2 ; i <= n ; i+=2){
            arr.push_back(i);
        }
        for(ll i = 1 ; i <= n ; i+=2){
            arr.push_back(i);
        }
    }
    for(ll it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    //ll t;cin>>t;
    // while(t--){
        solve();
    //}
    return 0;
}