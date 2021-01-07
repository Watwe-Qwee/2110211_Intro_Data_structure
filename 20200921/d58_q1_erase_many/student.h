#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
    int j=1,p,current=pos[0];
    for(int i=pos[0]+1;i<size();i++){
      if(j<pos.size()&&i==pos[j]){
        j++;
      }
      else{
        mData[current]=mData[i];
        current++;
      }
    }
    mSize=mSize-pos.size();
}

#endif