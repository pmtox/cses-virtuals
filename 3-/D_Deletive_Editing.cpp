#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    string s1 , s2;
    cin>>s1>>s2;
    unordered_map<char , int>mpp1;
    unordered_map<char , int>mpp2;
    for(int i : s1){
        mpp1[i]++;
    }
    for(int i : s2){
        mpp2[i]++;
    }
    int i = 0 , j = 0;
    while(i < s1.size() && j < s2.size()){
        if(s1[i] == s2[j]){
            if(mpp1[s1[i]] < mpp2[s2[j]]){
                break;
            }
            if(mpp1[s1[i]] == mpp2[s2[j]]){
                mpp2[s2[j]]--;
                j++;
            }
        }
        mpp1[s1[i]]--;
        i++;
    }
    if(j == s2.size()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}