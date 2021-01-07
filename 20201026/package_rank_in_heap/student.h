#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

#include<vector>
#include<algorithm>
template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  size_t count=0;
  for(size_t i=0;i<mSize;i++){
    if(mLess(mData[pos],mData[i])){
      count++;
    }
  }
  return count;
}

#endif
