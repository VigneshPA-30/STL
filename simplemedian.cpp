#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*

    Implement a generic function in C++ that takes a container of integers and returns the median value using the STL algorithms.
   
   
   arr is added to vector and sorted to find median value.
*/

int main()
{
    int arr[]={1,2,3,4,5,6};

    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        vec.push_back(arr[i]);
    }
        cout<<"Median Value : "<<endl;
        sort(vec.begin(),vec.end());
    if(vec.size()%2==0){
      float res=(float) ( vec[vec.size()/2]+vec[(vec.size()/2)-1])/2;
      cout<<res;
    }else{
       cout<< vec[vec.size()/2];
    }
}
