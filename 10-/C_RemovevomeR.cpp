#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int cnt1 =  0;
    for(int i = 1 ; i < n ; i++){
        if(s[i] != s[i-1]){
            cnt1++;
        }
    }   
    if(cnt1 == 1){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}