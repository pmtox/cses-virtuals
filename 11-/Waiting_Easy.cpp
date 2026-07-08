#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = 0;
    int j = arr[0];
    for(int i = 1 ; i < n ; i++){
        j = max(j , arr[i]);
        ans += j - arr[i];
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    int t;cin>>t;
	while(t--){
        solve();
    }
    return 0;
}
