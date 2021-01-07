#include<iostream>

int main(){
    int N,M,temp;
    std::cin>>N>>M;
    int A[N];
    bool checker[2000000];
    for(int i=0;i<N;i++){
        std::cin>>A[i];
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++)
            checker[A[i]+A[j]]=true;
    }
    for(int i=0;i<M;i++){
        std::cin>>temp;
        if(checker[temp]){
            std::cout<<"YES"<<std::endl;
        }
        else 
            std::cout<<"NO"<<std::endl;
    }
    return 0;
}