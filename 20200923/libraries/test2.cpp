#include<iostream>
#include<vector>
#include"vector.h"
int main(){
    CP::vector<int> a;
    for(int i=0;i<3;i++){
        a.push_back(i);
        std::cout<<a[i]<<" ";
    }
    CP::vector<int> b,c,d(a),e(2);
    std::cout<<"\n";
    for(int i=0;i<3;i++){
        b.push_back(i);
        std::cout<<b[i]<<" ";
    }
    c=b;
    std::cout<<"\n";
    for(int i=0;i<3;i++){
        std::cout<<c[i]<<" ";
    }
    std::cout<<"\n";
    for(int i=0;i<3;i++){
        std::cout<<d[i]<<" ";
    }
    a[1]=100;
    std::cout<<"*\n";
    e.push_back(2);
    for(int i=0;i<e.size();i++){
        std::cout<<e[i]<<" ";
    }
    std::cout<<e.size()<<" ";
}