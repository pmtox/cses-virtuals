#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
void solve(){
    string s;cin>>s;
    ll n = s.size();
    ll maxi = 0;
    ll i = 0;
    while(i < n){
        if(s[i] == '0'){
            i++;
            continue;
        }
        ll j = i + 1;
        while(j < n && s[j] == '1'){
            j++;
        }
        maxi = max(maxi , j - i);
        i = j;
    }
    if(maxi == n){
        cout<<n*n<<endl;
        return ;
    }
    if(s[0] == '1' && s[n - 1] == '1'){
        ll i = 0;
        ll cnt = 0;
        while(i < n &&  s[i] == '1'){
            i++;
            cnt++;
        }
        ll j = n - 1;
        while(j > i && s[j] == '1'){
            j--;
            cnt++;
        }
        maxi = max(maxi , cnt);
    }
    maxi++;
    ll c1 = (maxi + 1) / 2;
    ll c2 = (maxi) / 2;
    cout<<(c1)*(c2)<<endl;
}
int32_t main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}