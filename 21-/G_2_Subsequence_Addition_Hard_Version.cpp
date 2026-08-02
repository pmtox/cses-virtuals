#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
void solve(){
    ll n ; cin>>n;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    sort(arr.begin() , arr.end());
    if(arr[0] != 1){
        cout<<"NO"<<endl;
        return;
    }
    ll sum = 1;
    bool isok = true;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > sum){
            isok = false;
            break;
        }
        sum += arr[i];
    }
    if(isok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}