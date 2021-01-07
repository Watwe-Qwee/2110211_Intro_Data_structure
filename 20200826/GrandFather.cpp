#include<bits/stdc++.h>
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int N,M;
    std::cin>>N>>M;
    std::map<long long ,long long >  relation;
    long long  F,S;
    long long  cousin1,cousin2;
    for(int i=0;i<N;i++){
        std::cin>>F>>S;
        relation[S]=F;
    }
    for(int i=0;i<M;i++){
        std::cin>>cousin1>>cousin2;
        if(cousin1!=cousin2){
            if(relation.find(cousin1)!=relation.end()&&relation.find(cousin2)!=relation.end()){
                if(relation.find(relation[cousin1])!=relation.end()&&relation.find(relation[cousin2])!=relation.end()){
                    if(relation[relation[cousin1]]==relation[relation[cousin2]]){
                        std::cout<<"YES"<<std::endl;
                        continue;
                    }
                }
            }
        }
        std::cout<<"NO"<<std::endl;
    }
}