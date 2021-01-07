#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T > > data) {
  //write your code here
  sort(data.begin(),data.end());
  T *temp = new T[this -> mSize + data.size()]();
  this -> mSize += data.size();
  ensureCapacity(mCap+data.size());
  size_t m=0;
  for(auto x:data){
    temp[x.first+m]=x.second;
    m++;
  }
  for(size_t i=0,j=0;i<mSize;i++){
    if(temp[i]!=T()){
      continue;
    }
    temp[i]=mData[j];
    j++;
  }
  delete [] mData;
  this -> mData=temp;
}

#endif
