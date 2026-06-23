#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> goodAr(const vector<int>&arr){
    vector<int>good(arr.size());
    for(int i = 0 ; i < arr.size() ; i++){
        good[i] = i - arr[i];
    }
    return good;
}
bool isDup(int &i , int &j , const vector<int>&good){
    unordered_map<int , int>mpp;
    for(int idx = 0 ; idx < good.size() ; idx++){
        if(mpp.count(good[idx])){
            i = mpp[good[idx]];
            j = idx;
            return true;
        }
        mpp[good[idx]] = idx;
    }
    return false;
}
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    while(true){
        vector<int>good = goodAr(arr);
        int i = -1 , j = -1;
        if(!isDup(i , j , good)){
            break;
        }
        swap(arr[i] , arr[j]);
    }
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}