#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  //write your code only here
  //
  std::vector<T> res;
  int i=0;
  while(k--&&i<mSize){
    res.push_back(mData[mFront+i]);
    i++;
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  size_t size=to-from;
  mSize=size;
  mData=new T[size];
  mCap=size;
  mFront=0;
  int i=0;
  for(auto it=from;it<to;it++){
    mData[i]=(*it);
    i++;
  }

}

#endif
