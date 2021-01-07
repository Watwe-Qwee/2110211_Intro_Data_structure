#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  while(K>0&&mSize>0){
    K--;
    mSize--;
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::stack<T> newStack;
  if(K<mSize){
    for(int i=mSize-K;i<mSize&&K>0;i++){
      newStack.push(mData[i]);
    }
    mSize-=K;
  }
  else{
    for(int i=0;i<mSize;i++){
      newStack.push(mData[i]);
    }
    mSize=0;
  }
  return newStack;
}

#endif
