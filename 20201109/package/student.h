#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  node* temp = mHeader->next;
  //std::cout<<temp->data<<"\n";
  mHeader->next = temp ->next;
  temp->next->prev = mHeader;
  //std::cout<<mHeader->next->data<<"\n";
  temp->prev = mHeader->prev;
  mHeader->prev->next = temp;
  mHeader->prev = temp;
  temp->next = mHeader;
}

#endif
