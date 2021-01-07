#include<list>
#include<iostream>

using namespace std;

int main(){
    list<int> l;
    l.push_back(5);
    l.push_front(4);

    auto it = l.insert(l.end(),3);

    it--;
    l.insert(it,2);

    for(auto temp = l.begin(); temp != l.end(); temp++){
        std::cout<<*temp;
    }
}