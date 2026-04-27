#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;cin>>s;
    long long cnt = 0;
    for(int i = 0; i < s.size() - 1 ; i++){
        if(s[i] == s[i+1]) cnt++;
    }
    if(cnt <= 2 ) cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}