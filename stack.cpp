#include <iostream>
#include<vector>
using namespace std;

/*
    Program-->Write a C++ program to implement a custom container that behaves like a stack 
    using the STL algorithms and data structures.
    
    custom class Stack is created with vector as the base.
    Template<T> is used to enable Stack to accept any data type.
    
     Push function returns the bool to check whether the given data is added.
     Pop function returns the Top element and deletes the element.
     Top function returns the Top element.
     Size function returns the size of the total stack in 32bit integer.
     isEmpty function returns 0- when stack contains elemnts and 1- when stack is empty.
*/

template <typename T> class Stack{
    private:
        vector<T> vec;
    public:
    
        bool Push(T x){
            vec.push_back(x);
            return true;
        }
        
        T Pop(){
            T frstVal=vec.front();
            vec.erase(vec.begin());
            return frstVal;
        }

        T Top(){
            return vec.front();
        }

        uint32_t Size(){
            return vec.size();
        }

        bool isEmpty(){
            return vec.empty();
        }
        
        
};

int main()
{
    
    /*
    example program.
    */
   Stack<string> st;
   st.Push("Vignesh");
   st.Push("Kamal");
   st.Push("Dhoni");
   st.Push("Rajni");
   
    cout<<st.Pop()<<endl;     
    cout<<st.Size()<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.Top()<<endl;
   

    return 0;
}
