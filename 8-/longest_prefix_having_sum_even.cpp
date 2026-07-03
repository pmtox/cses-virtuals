#include<bits/stdc++.h>
using namespace std;
#define int long long int
void genAns(const vector<int>&arr , vector<int> &prefix){
    for(int i = 1 ; i <= arr.size() ; i++){
        prefix[i] = prefix[i-1] + arr[i-1];
    }
}
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<int>prefix(n + 1 , 0);
    genAns(arr , prefix);
    int ans = INT_MIN;
    int min_eve = 0;
    int min_odd = INT_MAX;
    for(int i = 1 ; i <= n ; i++){
        if(prefix[i] % 2 == 0){
            ans = max(ans , prefix[i] - min_eve);
            min_eve = min(min_eve , prefix[i]);
        }
        else{
            ans = max(ans , prefix[i] - min_odd);
            min_odd = min(min_odd , prefix[i]);
        }
    }
    if(ans != INT_MIN){
        cout<<ans<<endl;
    }
    else{
        cout<<"NO EVEN SUM"<<endl;
    }
}
int32_t main(){
    solve();
    return 0;
}