#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int r , y;
    cin>>r>>y;
    int diff = max(0LL , y - (r + 1));
    int ans = (diff + 1) / 2;
    cout << r + ans <<endl;
}
int32_t main(){
    IOS;
    int t;cin>>t;
	while(t--){
        solve();
    }
    return 0;
}
