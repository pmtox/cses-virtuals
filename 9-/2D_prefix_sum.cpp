#include<bits/stdc++.h>
using namespace std;
#define int long long int 
void solve(){
    int n , m;cin>>n>>m;
    vector<vector<int>> arr;
    for(int i = 0 ; i < n ; i++){
        vector<int>row;
        for(int j = 0 ; j < m ; j++){
            int x;cin>>x;
            row.push_back(x);
        }
        arr.push_back(row);
    }
    vector<vector<int>> pre(n , vector<int>(m , 0));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            pre[i][j] = arr[i][j];
            if(i > 0){
                pre[i][j] += pre[i - 1][j];
            }
            if(j > 0){
                pre[i][j] += pre[i][j-1];
            }
            if(i > 0 && j > 0){
                pre[i][j] -= pre[i-1][j-1];
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout<<pre[i][j]<<" ";
        }
        cout<<endl;
    }
}
int32_t main(){
    solve();
    return 0;
}