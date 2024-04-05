#ifndef _PostFix_h
#define _PostFix_h

template <typename T>
struct node {
    T value;
    node *next;
};

template <typename T>
class Stack{
    public:
        Stack();
        void push(T item);
        T peek();
        T pop();
        int solve(T equation);
        int getCount();
        void printStack();
        
    
    private:
        int count;
        node<T> *start;
};


#include "PostFix.cpp"
#endif


