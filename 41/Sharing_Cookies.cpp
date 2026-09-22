#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll a , b;
    cin>>a>>b;
    int d = a - b;
    cout<<((d % 2 == 0) ? (d / 2) : -1)<<endl;
}
int32_t main(){
    solve();
    return 0;
}