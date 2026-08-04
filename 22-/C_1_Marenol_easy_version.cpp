#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
// #define isok(fx) (fx ? "YES":"NO");
void solve(){
    ll n;cin>>n;
    string s1 , s2;cin>>s1 >> s2;
    ll s1cnt1 = 0 , s1cnt0 = 0;
    ll s2cnt1 = 0 , s2cnt0 = 0;
    for(int i = 0 ; i < n ; i++){
        if(s1[i] == '1'){
            if(i % 2) s1cnt1++;
            else s1cnt0++;
        }
        if(s2[i] == '1'){
            if(i % 2) s2cnt1++;
            else s2cnt0++;
        }
    }
    if(s1cnt1 == s2cnt1 && s1cnt0 == s2cnt0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    IOS;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}