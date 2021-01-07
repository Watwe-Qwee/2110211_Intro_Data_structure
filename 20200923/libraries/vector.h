#ifndef _CP_VECTOR_INCLUDED_
#define _CP_VECTOR_INCLUDED_

#include<iostream>
#include <stdexcept>
namespace CP{
    template<typename T>
    class vector{
        public:
            typedef T* iterator;


        protected:
            /* data */
            T *mData;
            size_t mCap;
            size_t mSize;
            void rangeCheck(int n){
                if(n<0 || (size_t)n>mSize){
                    throw std::out_of_range("index out of range");
                }
            }
            void expand(size_t capacity){
                T *newData=new T[capacity];
                for(int i=0;i<mSize;i++){
                    newData[i]=mData[i];
                }
                delete [] mData;
                mData=newData;
                mCap=capacity;
            }
            void ensureCapacity(size_t capacity){
                if(capacity>mCap){
                    size_t newCap= (capacity>2*mCap)? capacity :2*mCap;
                    expand(newCap);
                }
            }
        public:
            vector(): mSize(0),mCap(1),mData(new T[1]()){};
            vector(size_t capacity): mSize(capacity),mCap(capacity),mData(new T[capacity]()){};
            vector(const vector<T> &other): mSize(other.mSize),mCap(other.mCap),mData(new T[other.mCap]()){
                for(int i=0;i<mSize;i++){
                    mData[i]=other.mData[i];
                }
            };
            ~vector(){
                delete [] mData;
            }

            T& at(int index){
                rangeCheck(index);
                return mData[index];
            }
            T& operator[](int index){
                return  mData[index];
            }

            void push_back(const T& element){
                ensureCapacity(mSize+1);
                mData[mSize]=element;
                mSize++;
            }
            void pop_back(){
                mSize--;
            }
            iterator begin(){
                return &mData[0];
            }
            iterator end(){
                return &mData[0]+mSize;
            }
            size_t size();
            iterator insert(iterator it,const T& element);
            void erase(iterator it);
            void resize(size_t n){
                T init=T();
                for(size_t i=mSize;i<n;i++){
                    mData[i]=init;
                }
                mSize=n;
            }
            vector<T>& operator=(vector<T> other) {
                // other is copy-constructed which will be destruct at the end of this scope
                // we swap the content of this class to the other class and let it be descructed
                using std::swap;
                swap(this->mSize, other.mSize);
                swap(this->mCap, other.mCap);
                swap(this->mData, other.mData);
                return *this;
            }
    };
    template<typename T>
    size_t vector<T>::size(){
        return mSize;
    }
    template<typename T>
    T* vector<T>::insert(vector<T>::iterator it,const T& element){
        size_t pos=it-begin();
        ensureCapacity(mSize+1);
        for(int i=mSize;i>pos;i--){
            mData[i]=mData[i-1];
        }
        mData[pos]=element;
        mSize++;
        return begin()+pos;
    }
    
    template<typename T>
    void vector<T>::erase(vector<T>::iterator it){
        while(it<end()){
            (*it)=*(it+1);
            it++;
        }
        mSize--;
    }
}
#endif