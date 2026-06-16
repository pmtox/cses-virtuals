#include<iostream>
void solve(){
    int n;std::cin>>n;
    if(n % 5 == 0){
        std::cout<<"No"<<std::endl;
    }
    else{
        std::cout<<"Yes"<<std::endl;
    }
}
int main(){
    solve();
    return 0;
}