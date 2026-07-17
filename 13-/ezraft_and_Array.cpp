#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    if(n == 1){
        cout<<"1"<<endl;
        return;
    }
    if(n == 2){
        cout<<"-1"<<endl;
        return ;
    }
    arr[0] = 1 ; arr[1] = 2;
    for(int i = 2 ; i < n ; i++){
        if(i == 2){
            arr[i] = arr[i - 1] + 1;
        }
        else{
            arr[i] = arr[i - 1] + arr[i - 1];
        }
    }
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}