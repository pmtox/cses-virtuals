#include<bits/stdc++.h>
using namespace std;
vector<int>genPref(const vector<int>&arr , vector<int>&prefix){
    prefix[0] = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    return prefix;
}
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<int>prefix(n , 0);
    prefix = genPref(arr ,  prefix);
    for(int i : prefix){
        cout<<i<<" ";
    }
    cout<<endl;
}
int32_t main(){
    solve();
    return 0;
}