#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int x , z;
    cin>>x>>z;
    if(x % z == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}