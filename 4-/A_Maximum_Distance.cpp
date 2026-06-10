#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    vector<int>arr1(n);
    vector<int>arr2(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr1[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>arr2[i];
    }
    int dx = 0 , dy = 0;
    int maxi = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            dx = arr1[i] - arr1[j];
            dy = arr2[i] - arr2[j];
            int sqr = dx * dx + dy * dy;
            maxi = max(maxi , sqr);
        }
    }
    cout<<maxi<<endl;
}
int32_t main(){
    solve();
    return 0;
}