#ifndef _CP_STACK_INCLUDED_
#define _CP_STACK_INCLUDED_
namespace CP{
    template<typename T>
    class stack
    {
        protected:
            T* mData;
            size_t mCap;
            size
        public:
            stack(/* args */);
            ~stack();
        };
        
        stack::stack(/* args */)
        {
        }
        
        stack::~stack()
        {
        }
    }
}

#endif