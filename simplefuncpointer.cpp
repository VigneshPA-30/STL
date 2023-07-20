#include <iostream>

/*
    write a program that adds , removes student from a class while maintaining 
    count using Function Pointer.
    
    This has 4 functions with return type int to confirm whether work is done 
    functions include 1.adding student 2.removing student 3.display count 4.completing update
    
    function pointer array has pointer for all functions.
    
    In while loop user give input according to which function is called.
    
    If in_loop variable is unset from the function , program will exit from loop 
*/

using namespace std;
    
int no_of_Students=0;

int add_Student(void){
    no_of_Students++;
    cout<<"One Student Added"<<"\n\n"<<endl; 
    return 1;
}

int remove_Student(void){
    no_of_Students--;
    cout<<"One Student Removed"<<"\n\n"<<endl; 
    return 1;
}

int display_Count(void){
   cout<<"No of Students are-->"<<no_of_Students<<"\n\n"<<endl; 
   return 1;
}

int work_Done(void){
     cout<<"<<-----------------EXITING PROGRAM------------->>"<<"\n\n"<<endl; 
    return 0;
}

int main()
{
     int (*func_ptr [4])(void)={add_Student,remove_Student,display_Count,work_Done}; 
     unsigned int option;
     int in_loop=1;
     while(in_loop){
         cout<<"ADD STUDENT TO THE CLASS--------TYPE 0"<<endl;
         cout<<"REMOVE STUDENT FROM CLASS-------TYPE 1"<<endl;
         cout<<"DISPLAY STUDENT LIST OF CLASS---TYPE 2"<<endl;
         cout<<"EXIT THE LISTING OF CLASS-------TYPE 3"<<endl;
         
         cin>>option;
         
        
         
         if(option<4){
         in_loop=(*func_ptr[option])();
         }else{
             cout<<"\n\n~~~~~~~~~~WRONG INPUT SELECT AGAIN~~~~~~~~~~"<<endl;
         }
         
         
     }
    
    
  return 0;
}
