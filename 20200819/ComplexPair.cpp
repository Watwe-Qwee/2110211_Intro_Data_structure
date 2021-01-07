#include<iostream>

int main(){
    std::pair< int*, std::pair<int,bool> > x;
    int a[2]={1,2};
    x=std::make_pair(a,std::make_pair(1,1));
    std::cout<<x.first[0]<<" "<<x.first[1]<<std::endl;
    std::cout<<x.second.first<<" "<<x.second.second<<std::endl;
    return 0;
}