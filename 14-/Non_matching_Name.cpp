#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n , m;cin>>n>>m;
    string s1;cin>>s1;
    string s2;cin>>s2;
    int i = 0 , j = 0;
    // bool isok = true;
    int cnt = 0;
    vector<int>arr(26 , 0);
    for(char c : s1){
        arr[c - 'a'] = 1;
    }
    for(char c : s2){
        arr[c - 'a'] = 1;
    }
    for(int x : arr){
        cnt += x;
    }
    if(cnt != 26){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}