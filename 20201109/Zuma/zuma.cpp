#include <list>
#include <iostream>
int main(){
    std::list<int> list_marble;
    int temp;
    size_t n,k,v;
    std::cin>>n>>k>>v;
    for(size_t i=0;i<n;i++){
        std::cin>>temp;
        list_marble.push_back(temp);
    }
    std::list<int>::iterator it = list_marble.begin(),itl,itr;
    for(size_t i=0;i<k;i++){
        it++;
    }
    it = list_marble.insert(it,v);
    size_t count = 1;
    temp = *it;
    itl=it;
    if(itl != list_marble.begin()){
        itl--;
    }
    itr=it;
    if(itr != list_marble.end()){
        itr++;
    }
    while(*itl==temp){
        count++;
        if(itl == list_marble.begin()){
             break;
        }
        itl--;
    }
    while(*itr==temp){
        count++;
        if(itr==list_marble.end()){
            break;
        }
        itr++;
    }
    itl=it;
    itl--;
    itr=it;
    itr++;

    while(count>2 && list_marble.size()>0){
        std::list<int>::iterator x = list_marble.begin();
        temp = *it;
        list_marble.erase(it);
        while(*itl==temp){
            itl = list_marble.erase(itl);
            if(itl == list_marble.begin()){
                break;
            }
            itl--;
        }
        while(*itr==temp){
            itr=list_marble.erase(itr);
            if(itr==list_marble.end()){
                break;
            }
        }
        if(*itr!=*itl){
            break;
        }
        if(itl == list_marble.begin() && itr==list_marble.end()){
            break;
        }
        it=itr;
        itl=it;
        itl--;
        itr++;
    }

    it=list_marble.begin();
    for(size_t i = 0;i<list_marble.size();i++){
        std::cout<<*it<<" ";
        it++;
    }
}