#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    string s;cin>>s;
    ll n = s.size();
    string ans = "";
    bool fst = true;
    ll iszero = -1 , isone = -1;
    for(int i = 0 ; i < n ; i++){
        if(s[i] != '0'){
            continue;
        }
        string aa = s;
        aa.erase(i , 1);
        int k = aa.size();
        string bb = "";
        bool isBb = true;
        for(int j = 0 ; j < k ; j++){
            if(aa[j] != '1'){
                continue;
            }
            string cur = aa;
            cur.erase(j , 1);
            if(isBb || cur < bb){
                bb = cur;
                isBb = false;
            }
        }
        if(fst || bb  > ans){
            ans = bb;
            fst = false;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}