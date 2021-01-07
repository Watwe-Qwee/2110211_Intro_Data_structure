#ifndef __STUDENT_H_
#define __STUDENT_H_
#include"vector.h"

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  size_t current=pos[0],j=1;
  for(int i=pos[0]+1;i<mSize;i++){
    if(j<pos.size()&&pos[j]==i){
      j++;
    }
    else{
      mData[i-j]=mData[i];
    }
  }
  mSize-=pos.size();
}

#endif
