#include<iostream>
#include<queue>

int main(){
    size_t n,m;
    std::cin>>n>>m;

    for(size_t i=0;i<m;i++){
        int n1,n2;
        std::cin>>n1>>n2;
        if(n1==n2){
            std::cout<<"a and b are the same node"<<"\n";
            continue;
        }
        std::string code1="a",code2="b";
        if(n1>n2){
            std::swap(n1,n2);
            std::swap(code1,code2);
        }
        std::queue<int> q;
        q.push(n1);
        while(q.front()<n2){
            q.push(2*q.front()+1);
            q.push(2*q.front()+2);
            q.pop();
        } 
        if(q.front()==n2){
            std::cout<<code1<<" is an ancestor of "<<code2<<"\n";
        }
        else{
            std::cout<<"a and b are not related"<<"\n";
        }

    }

    return 0;
}