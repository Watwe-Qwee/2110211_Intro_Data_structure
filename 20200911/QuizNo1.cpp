#include<bits/stdc++.h>
int main(){
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    int n,m,k;
    std::cin>>n>>m>>k;
    std::vector<int> input(n),input0(m);
    for(int i=0,temp;i<n;i++){
        std::cin>>input[i];
    }
    sort(input.begin(),input.end());
    for(int i=0;i<m;i++){
      std::cin>>input0[i];
    }
    for(int i=0;i<m;i++){
        auto lower=std::lower_bound(input.begin(),input.end(),input0[i]-k);
        auto upper=std::upper_bound(input.begin(),input.end(),input0[i]+k);
        //std::cout<<lower<<" "<<upper<<" ";
        std::cout<<upper-lower<<" ";
        //std::cout<<std::endl;
    }
    return 0;
}