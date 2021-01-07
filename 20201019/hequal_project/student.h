#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  if(this -> mSize != other.mSize){
    return false;
  }
  CP::priority_queue<T,Comp> a,b=other;
  for(size_t i=0;i<mSize;i++){
    a.push(mData[i]);
  }
  for(size_t i=0;i<mSize;i++){
    if(a.size()>0&&a.top()!=b.top()){
      return false;
    }
    a.pop();
    b.pop();
  }
  //write your code here
  return true; // you can change this line
}

#endif
