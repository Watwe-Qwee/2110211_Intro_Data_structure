#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        ensureCapacity(mSize+s.mSize);
        for(int i=mSize-1;i>=0;i--){
            mData[s.mSize+i]=mData[i];
        }
        for(int i=0;i<s.mSize;i++){
            mData[i]=s.mData[i];
        }
        mSize+=s.mSize;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        ensureCapacity(mSize+q.mSize);
        for(int i=mSize-1;i>=0;i--){
            mData[q.mSize+i]=mData[i];
        }
        for(int i=0;i<q.mSize;i++){
            mData[q.mSize-i-1]=q.mData[(q.mFront+i)%q.mCap];
        }
        mSize+=q.mSize;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        ensureCapacity(mSize+s.mSize);
        for(int i=0;i<s.mSize;i++){
            mData[mSize+i]=s.mData[s.mSize-1-i];
        }
        mSize+=s.mSize;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        ensureCapacity(mSize+q.mSize);
        for(int i=0;i<q.size();i++){
            mData[mSize+i]=q.mData[i];
        }
        mSize+=q.mSize;
    }
}
