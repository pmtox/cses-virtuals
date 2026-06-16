#include<bits/stdc++.h>
using namespace std;
#define int long long
int ceil_division(int a , int b){
    return (a + b - 1) / b;
}
void solve(){
    int x , y , k;
    cin>>x>>y>>k;
    int totl_needed = k * y + k - 1;
    int totl_sticks = x - 1;
    int trades = 0;
    trades += ceil_division(totl_needed , totl_sticks);
    trades += k;
    cout<<trades<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}