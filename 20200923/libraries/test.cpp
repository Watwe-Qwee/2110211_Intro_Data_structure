#include<iostream>
#include"vector copy.h"
#include<vector>
int main()
{
    CP::vector<int> a(3);
    for(int i=0;i<3;i++)
    {
        a.push_back(i);
        std::cout<<i;
    }
    std::cout<<"\n";
    for(int i=0;i<3;i++)
    {
        std::cout<<a[i];
    }
    CP::vector<int> b;
    a=b;
    a[2]=100;
    std::cout<<"\n";
    for(int i=0;i<3;i++)
    {
        std::cout<<a[i];
    }
    std::cout<<"\n";
    for(int i=0;i<3;i++)
    {
        std::cout<<b[i];
    }
    std::cout<<"\n";
    std::cout<<" "<<a.size();
}