#include<bits/stdc++.h>
using namespace std;
#define int long long int
bool bll(vector<int>&arr , int mid , int x){
    int req = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] < mid){
            req += (mid - arr[i]);
        }
    }
    return req <= x;
}
void solve(){
    int n,x;cin>>n>>x;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int l = 1 , r = 1e12 , ans = -1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(bll(arr , mid , x)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}