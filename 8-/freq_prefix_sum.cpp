#include<bits/stdc++.h>
using namespace std;
#define int long long int
void getPref(const vector<int>&arr){
    int n = arr.size();
    int mx = *max_element(arr.begin() , arr.end());
    vector<int>pref(mx + 1 , 0);
    for(int i = 0 ; i < n ; i++){
        pref[arr[i]]++;
    }
    for(int i : pref){
        cout<<i<<" ";
    }
}
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    getPref(arr);
}
int32_t main(){
    solve();
    return 0;
}