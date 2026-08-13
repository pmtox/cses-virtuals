#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n;
bool ans;
vector<ll>arr;
bool isok(ll k){
    vector<ll>b;
    for(ll i = 0 ; i < n ; i++){
        if(arr[i] != k){
            b.push_back(arr[i]);
        }
    }
    ll m = b.size();
    for(ll i = 0 ; i < m ; i++){
        if(b[i] != b[m - 1 - i]){
            return false;
        }
    }
    return true;
}
void solve(){
    cin>>n;
    arr.resize(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(ll i = 0 ; i < n ; i++){
        if(arr[i] != arr[n - 1 - i]){
            if(isok(arr[i]) || isok(arr[n - 1 - i])){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            return;
        }
    }
    cout<<"YES"<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}