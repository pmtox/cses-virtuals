#include<bits/stdc++.h>
using namespace std;
#define int long long int
// bool fact(string s){
//     unordered_map<char , int> mpp;
//     for(int i : s){
//         mpp[i]++;
//     }
//     for(auto it : mpp){
//         if(mpp.size() == 1 && it.second == s.size()){
//             return true;
//         }
//     }
//     return false;
// }
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    // if(fact(s)){
    //     cout<<n<<endl;
    // }
    // else{
        map<char , int>mpp;
        vector<int>arr(n , 0);
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            mpp[s[i]]++;
            if(mpp[s[i]] == 1){
                cnt++;
            }
            arr[i] = cnt;
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            ans += arr[i];
        }
        cout<<ans<<endl;
    // }
}
void ansss(){
    int n;cin>>n;
    string s;cin>>s;
    int ttlAns = 0;
    set<char>st;
    st.insert(s.begin() , s.end());
    int lenst = st.size();
    map<char , int>mpp;
    for(int i = 0 ; i < n ; i++){
        mpp[s[i]]++;
    }
    for(int i = n ; i >= 0 ; i--){
        if(!(--mpp[s[i]])){
            st.erase(s[i]);
        }
        ttlAns += st.size();
    }
    cout<<ttlAns<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        // solve();
        ansss();
    }
    return 0;
}