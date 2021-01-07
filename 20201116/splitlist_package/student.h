
void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if(size()==0){
        return;
    }

    size_t mFirstSize = ((float)size()/2)+0.5 , mSecondSize = mSize - mFirstSize;
    iterator it = begin();

    for(int i = 1;i<mFirstSize;i++){
        it++;
    }

    iterator it2 = it;

    it2++;

    list1.mHeader->prev->next = begin().ptr;
    begin().ptr->prev = list1.mHeader->prev;
    it.ptr->next = list1.mHeader;
    list1.mHeader->prev = it.ptr;

    mHeader->next = it2.ptr;
    it2.ptr->prev = mHeader;

    list2.mHeader->prev->next = begin().ptr;
    begin().ptr->prev = list2.mHeader->prev;
    end().ptr->prev->next = list2.mHeader;
    list2.mHeader->prev = end().ptr->prev;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;

    mSize = 0;
    list1.mSize += mFirstSize;
    list2.mSize += mSecondSize;
}
