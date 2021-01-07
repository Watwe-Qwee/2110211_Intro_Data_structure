#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure

#include<map>
template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::map<T,int> countMap;
  T *tempMData=new T[mCap];
  int count=0;
  for(int i=0;i<mSize;i++){
    if(countMap.find(mData[i])==countMap.end()){
      tempMData[count]=mData[i];
      countMap[mData[i]]=1;
      count++;
    }
  }
  delete [] mData;
  mData=tempMData;
  mSize=count;
}

#endif
