#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int pos=position-begin(),interval=last-first;
  int tempSize=size()+last-first;
  ensureCapacity(tempSize);
  mSize=tempSize;
  T *tempData=new T[last-first];
  int count=0;
  for(auto it=first;it<last;it++){
    tempData[count]=(*it);
    count++;
  }
  for(int i=mSize-1;i>=pos+last-first;i--){
    mData[i]=mData[i-interval];
  }
  count=0;
  for(int i=pos;i<pos+interval;i++){
    mData[i]=tempData[count];
    count++;
  }
}

#endif
