#include<iostream>
using namespace std;
#define int long long
void solve(){
    int a , b;
    cin>>a>>b;
    if(abs(a - b) <= 2){
        cout<<"Interesting"<<endl;
    }
    else{
        cout<<"Boring"<<endl;
    }
}
int32_t main(){
    solve();
    return 0;
}