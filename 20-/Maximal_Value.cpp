#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    ll cnt = 0;
    for(int i = 1 ; i < n - 1 ; i++){
        if(arr[i - 1] < arr[i] && arr[i + 1] < arr[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int32_t main(){
    solve();
    return 0;
}