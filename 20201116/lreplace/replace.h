void replace(const T& x, list<T>& y) {
  //write your code here
  CP::list<T>::iterator it = begin(),it2;
  CP::list<T> tempy;
  while(it!=end()){
    if(*it == x){
      it2 =it;
      it2++;

      erase(it);
      it--;

      tempy = y;
      std::cout<<tempy.begin().ptr<<" "<<it.ptr<<" "<<it2.ptr<<" "<<tempy.mHeader->prev<<" ";
      std::cout<<*it<<" "<<it.ptr<<" "<<*it2<<" "<<it2.ptr<<" \n";


      it.ptr->next = tempy.mHeader->next;
      tempy.mHeader->next->prev = it.ptr;
      tempy.mHeader->prev->next = it2.ptr;
      it2.ptr->prev = tempy.mHeader->prev;

      it=it2;
      it--;
    }
    it++;
  }
}
