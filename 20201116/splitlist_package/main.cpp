#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    CP::list<int> x, a, b;
    for(int i=0;i<100;i++){
        x.push_back(i);
    }
    for(int i=0;i<100;i++){
        a.push_back(i);
    }

    
    x.splitList(a, b);
    cout<<"x is"<<endl;
    x.print();
    cout<<"a is"<<endl;
    a.print();
    cout<<"b is"<<endl;
    b.print();
    return 0;
}
