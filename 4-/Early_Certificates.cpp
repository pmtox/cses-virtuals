#include<bits/stdc++.h>
using namespace std;
#define for(i , n) for(int i = 0 ; i < n ; i++)
#define int long long
void solve(){
    int n , m;cin>>n>>m;
    string s1 , s2;
    cin>>s1>>s2;
    string fstr = "";
    for(i , min(n , m)){
        if(s1[i] == s2[i]){
            fstr += s1[i];
        }
        else{
            break;
        }
    }
    cout<<fstr<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}