#include<iostream>
void solve(){
    int n;std::cin>>n;
    if(n % 5 == 0){
        std::cout<<"NO"<<std::endl;
    }
    else{
        std::cout<<"YES"<<std::endl;
    }
}
int main(){
    solve();
    return 0;
}