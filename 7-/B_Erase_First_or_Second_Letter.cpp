#include<bits/stdc++.h>
using namespace std;
#define int long long int
// we can count number of characters;
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int cnt = 0;
    map<char , int>mpp;
    vector<int>arr(n , 0);
    // cout<<(a - (t))<<" :: ";
    for(int i = 0 ; i < n ; i++){
        mpp[s[i]]++;
        if(mpp[s[i]] == 1){
            cnt++;
            // cout<<"cnt = "<<cnt<<" ";
            // cout<<"MPP = "<<mpp[s[i]]<<" ";
        }
        arr[i] = cnt;
        // cout<<arr[i]<<" ";
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans += arr[i];
    }
    // for(auto &i : mpp){
    //     cout<<i.first<<" "<<"-> "<<i.second;
    //     cout<<endl;
    // }
    // cout<<endl;
    cout<<ans<<endl;
}
void ansss(){
    int n;cin>>n;
    string s;cin>>s;
    set<char>st;
    st.insert(s.begin() , s.end());
    map<char , int>mpp;
    for(int i = 0 ; i < n ; i++){
        mpp[s[i]]++;
    }
    int ttl = 0;
    for(int i = n ; i >= 0 ; i--){
        if(!(--mpp[s[i]])){
            st.erase(s[i]);
        }
        ttl += st.size();
    }
    cout<<ttl<<endl;
}
int32_t main(){
    int t;cin>>t;
    // int a = t;
    while(t--){
        // solve();
        ansss();
    }
    return 0;
}