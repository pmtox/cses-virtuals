#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve2(){
    int n;cin>>n;
    for(int i = 0 ; i < (1 << n) ; i++){
        int grey = i ^ (i >> 1);
        for(int it = n - 1 ; it >= 0 ; it--){
            cout<<((grey >> it) & 1);
        }
        cout<<endl;
    }
}
vector<string>greyCode(ll n){
    if(n == 1){
        return {"0" , "1"};
    }
    vector<string>prev = greyCode(n - 1);
    vector<string>ans;
    for(string i : prev){
        ans.push_back("0" + i);
    }
    for(int it = prev.size() - 1 ; it >= 0 ; it--){
        ans.push_back("1" + prev[it]);
    }
    return ans;
}
void solve(){
    ll n;cin>>n;
    vector<string>ans = greyCode(n);
    for(string it : ans){
        cout<<it<<endl;
    }
}   
int32_t main(){
    IOS;
    // solve();
    solve2();
    return 0;
}