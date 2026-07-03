#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int ans = 1;
    while(n > 0){
        ans *= 10;
        n /= 10;
    }
    cout<< ans + 1<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}