#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  int n = mSize;
  node* it = mHeader->next;
  while(n--){
    if(it->data == value){
      it->prev->next = it->next;
      it->next->prev = it->prev;
      delete it;
      mSize--;
    }
    it = it->next;
  }
}

#endif
