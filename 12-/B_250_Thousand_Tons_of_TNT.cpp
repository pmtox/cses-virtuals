#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<int>pref(n , 0);
    pref[0] = arr[0];
    for(int i = 1 ; i < n ; i++){
        pref[i] = pref[i - 1] + arr[i];
    }
    int ans = 0;
    for(int i = 1 ; i <= n ; i++){
        if(n % i) continue;
        int start = i - 1;
        int maxi = pref[start];
        int mini = pref[start];
        for(int k = start + i ; k < n ; k += i){
            int curr = pref[k] - pref[k - i];
            maxi = max(maxi , curr);
            mini = min(mini , curr);
        }
        ans = max(ans , maxi - mini);
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