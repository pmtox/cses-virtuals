#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n , k;cin>>n>>k;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int prefix = 0;
    unordered_map<int , int>mpp;
    int ans = INT_MIN;
    mpp[0] = -1;
    for(int i = 0 ; i < n ; i++){
        prefix += arr[i];
        int rem = (prefix % k + k) % k;
        if(mpp.find(rem) != mpp.end()){
            int len = i - mpp[rem];
            ans = max(len , ans);
        }
        else{
            mpp[rem] = i;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    solve();
    return 0;
}