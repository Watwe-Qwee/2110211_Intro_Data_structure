#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>
#include <math.h>
#define k 4


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T temp = mData[idx];
    while(idx>0){
        size_t p=ceil(floor(idx)/k)-1;
        if( mLess(temp,mData[p]) ) break;
        mData[idx] = mData [p];
        idx=p;
    }
    mData[idx]=temp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
      size_t c;
      while ((c = 4 * idx + 1) < mSize) {
          T max = mData[c];
          size_t pos=0;
          for(size_t i =1;i<4;i++){
               if (c + i < mSize && mLess(mData[c+pos],mData[c + i]) ){
                   pos=i;
               }
          }
        c+=pos;
        if ( mLess(mData[c],tmp) ) break;
        mData[idx] = mData[c];
        idx = c;
      }
      mData[idx] = tmp;
}

#endif

