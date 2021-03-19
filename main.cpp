#include <iostream>
#include <algorithm>

void solve (){
    int N,B;
    int s=0,con=0,aux;
    std::cin>>N>>B;
    int v[10000000];
    for(int i=0;i<N;i++)
        std::cin>>v[i];
        std::sort(v,v+N);
    for(int i=0;i<N;i++) {
        if(B>= v[i]){
            B-=v[i];
        con++;}

    }
std::cout<<con;
}
int main() {
    int T;
    std::cin>>T;
    for(int i=0;i<T;i++){
        int aux=i+1;
        std::cout<<"Case #"<<aux<<": ";solve();std::cout<<"\n";}
    return 0;
}
