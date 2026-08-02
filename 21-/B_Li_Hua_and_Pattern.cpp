#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
#define isok(fxn) (fxn ? "YES" : "NO")
void solve(){
    ll n , k;
    cin>>n>>k;
    vector<vector<ll>>arr(n , vector<ll>(n));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }
    ll diff = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[i][j] != arr[n - 1 - i][n - 1 - j]){
                diff++;
            }
        }
    }
    diff /= 2;
    if(diff > k) cout<<"NO"<<endl;
    else{
        k -= diff;
        if(n & 1){
            cout<<"YES"<<endl;
        }
        else if(k & 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}