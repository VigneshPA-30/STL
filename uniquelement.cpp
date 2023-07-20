#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*

    Implement a C++ program that counts the number of unique elements in a given range using the STL set container.
    
    array of elements is converted intoset thus providing unique elements
*/

int main()
{
    int arr[]={1, 5, 23, 9, 7, 16, 5, 13, 17, 23, 31, 12, 8, 23, 4, 19, 27, 6, 23, 14,
    2, 11, 23, 20, 3, 28, 18, 23, 10, 15, 23, 22, 29, 21, 23, 25, 30, 26, 23, 32, 24};

    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    cout<<"Number of unique elements in the array "<<s.size()<<endl;
    return 0;
}
