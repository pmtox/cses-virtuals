#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int>arr(n);
    vector<int>ans(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        ans[(n - k + i) % n] = arr[i];
    }
    // for(int i = 0 ; i < n ; i++){
    //     ans[(n + k) % n] = arr[i];       right rotate
    // }
    for(int i : ans){
        cout<<i<<" ";
    }
}
int32_t main(){
    solve();
    return 0;
}