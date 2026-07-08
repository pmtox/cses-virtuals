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
    int mni = INT_MAX;
    int maxi = INT_MIN;
    for(int i = 1 ; i < n ; i++){
        mni = min(arr[i] , arr[i-1]);
        maxi = max(maxi , mni);
    }
    cout<<maxi<<endl;
}
int32_t main(){
    IOS;
    int t;cin>>t;
	while(t--){
        solve();
    }
    return 0;
}
