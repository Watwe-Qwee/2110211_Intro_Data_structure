#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;

  if(it==end()) return result;

  node* temp = mHeader->prev;
  it.ptr -> prev -> next = mHeader;
  mHeader -> prev = it.ptr ->prev;

  result.mSize = mSize - pos;
  mSize = pos;

  result.mHeader -> next = it.ptr;
  it.ptr -> prev = result.mHeader;
  result.mHeader -> prev = temp;
  temp -> next = result.mHeader;
  return result;
}

#endif
