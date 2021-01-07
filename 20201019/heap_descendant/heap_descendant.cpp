#include <iostream>
#include <queue>

int main(){
    int n,m;
    std::queue<int> q;
    std::cin>>n>>m;
    q.push(m);
    std::vector<int> v;
    while(q.front()<n){
        v.push_back(q.front());
        q.push(2*q.front()+1);
        q.push(2*q.front()+2);
        q.pop();
    }
    std::cout<<v.size()<<std::endl;
    for(size_t i=0;i<v.size();i++){
        std::cout<<v[i]<<" ";
    }
    return 0;
}