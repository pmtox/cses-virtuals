#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    vector<vector<char>>arr(8 , vector<char>(8));
    for(int i = 0 ; i < 8 ; i++){
        for(int j = 0 ; j < 8 ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < 8 ; i++){
        bool isR = true;
        for(int j = 0 ; j < 8 ; j++){
            if(arr[i][j] != 'R'){
                isR = false;
                break;
            }
        }
        if(isR){
            cout<<"R"<<endl;
            return;
        }
    }
    cout<<"B"<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}