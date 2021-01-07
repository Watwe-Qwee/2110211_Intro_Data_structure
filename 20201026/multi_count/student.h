#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t > > CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t > > output;
    if(k.size()==0){
        return output;
    }
    output.resize(k.size());
    std::map<int,std::vector<size_t> > pos;
    for(size_t i=0;i<k.size();i++){
        output[i]=std::make_pair(k[i],0);
        pos[k[i]].push_back(i);
    }
    for(size_t i=0;i<mSize;i++){
        T temp = mData[(i+mFront)%mCap];
        if(pos.find(temp)!=pos.end()){
            for(auto idx : pos[temp]){
                output[idx].second++;
            }
        }
    }
    return output;
}

#endif
