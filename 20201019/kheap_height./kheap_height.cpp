#include<math.h>
#include<iostream>

int main(){
    long long n;
    int k;
    std::cin>>n>>k;
    if(k==1){
        std::cout<<n-1;
    }
    else{
        std::cout<<ceil(log10(n*(k-1)+1)/log10(k)-1);
    }
    return 0;
}