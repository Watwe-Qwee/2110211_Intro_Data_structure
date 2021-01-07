#include<iostream>
#include"queue.h"
#include"student.h"
int main()
{
    CP::queue<int> a;
    for(int i=0;i<5;i++){
        a.push(i);
    }
    CP::queue<int> b(a);
    for(int i=0;i<5;i++){
        std::cout<<b.front();
        b.pop();
    }
    return 0;
}