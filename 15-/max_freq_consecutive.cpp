#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(NULL);
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    vector<vector<ll>> pref(n + 1 , vector<ll>(26));
    for(int i = 0 ; i < n ; i++){
        pref[i + 1] = pref[i];
        ll charr = s[i] - 'a';
        pref[i + 1][charr]++;
    }
    ll q;cin>>q; // no. of queries
    for(int i = 0 ; i < n ; i++){
        ll a , b;cin>>a>>b;
        char maxS = '?';
        ll maxi = -1;
        for(int char_id = 0 ; char_id <= 26 ; char_id++){
            ll freqq = pref[b + 1][char_id] - pref[a][char_id];
            if(freqq > maxi){
                maxS = 'a' + char_id;
                maxi = freqq;
            }
        }
        cout<<maxS << " : " << maxi <<endl;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}