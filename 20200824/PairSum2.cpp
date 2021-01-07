#include<bits/stdc++.h>

bool checkerFunction(std::map<int,int> &A,int checker,int N);
int main(){
    int N,M;
    std::cin>>N>>M;
    std::map<int,int> A;
    std::map<int,int>::iterator it;
    int checker[M];
    int temp;
    for(auto i=0;i<N;i++){
        std::cin>>temp;
        A[temp]++;
    }
    for(auto i=0;i<M;i++){
        std::cin>>checker[i];
    }
    for(auto i=0;i<M;i++){
        if(checkerFunction(A,checker[i],N)){
            std::cout<<"YES"<<std::endl;
        }
        else{
            std::cout<<"NO"<<std::endl;
        }
    }
    return 0;
}
bool checkerFunction(std::map<int,int> &A,int checker,int N){

    for(auto x:A){
        if(A.find(checker-x.first)!=A.end()){
            if(checker-x.first==x.first)
                if(x.second==1)
                    return false;
          return true;
        }
    }
    return false;
}