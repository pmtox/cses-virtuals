#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    ll contrast = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<ll>fil;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] == arr[i - 1]){
            continue;
        }
        else{
            fil.push_back(arr[i - 1]);
        }
    }
    ll cnt = 2;
    fil.push_back(arr[n - 1]);
    for(int i = 1 ; i < fil.size() - 1 ; i++){
        if((fil[i] > fil[i - 1] && fil[i] > fil[i + 1]) || 
        (fil[i] < fil[i - 1] && fil[i] < fil[i + 1])){
            cnt++;
        }
    }
    if(fil.size() == 1){
        cout<<1<<endl;
    }
    else{
        cout<<cnt<<endl;
    }
}
int32_t main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}