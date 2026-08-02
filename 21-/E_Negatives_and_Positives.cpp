#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
// #define isok(fxn) (fxn ? "YES" : "NO")
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr;
    for(int i = 1 ; i <= n ; i++){
        ll x; cin>>x;
        arr.push_back(x);
    }
    ll sum = 0;
    ll cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < 0){
            cnt++;
            arr[i] = -arr[i];
        }
        sum += arr[i];
    }
    if(cnt % 2){
        sum -= 2 * *min_element(arr.begin() , arr.end());
    }
    cout<<sum<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}