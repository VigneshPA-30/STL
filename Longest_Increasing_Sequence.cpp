#include <iostream>
#include<bits/stdc++.h>

using namespace std;

/*
    Develop a C++ program that finds the longest increasing subsequence in a 
    given array using the STL algorithms and data structures.
    
    This program prints the LIS that occurs first if two or more LIS with same amt. of 
    elements is present
    
    Given array is converted into vector.
    
    Variables:
    max-used to calculate the length of continuous sequence and updates when a new LIS occurs.
    start-to store the address of begining element of LIS.
    itend- stores addresss of last element in vector.
    diff- to comapare difference
    t_s- temporary start.
    
    First for loop iterates from first element of vector to last before element of vector.
    t_s stores the possible start of LIS.
    Second loop iterates from i+1 to last element of vector.
    difference between t_s element and current element in 2nd loop is checked with diff,if 
    equal it means it is continuous.
    then checking whether it is greater than max, if it is then start & max  is updated .
    This provides the LIS .
*/

int main()
{
    int arr[]={100,34,45,56,6,7,8,9,10,12,45,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    vector<int> vec;
    for (int i = 0; i < n; i++)
        vec.push_back(arr[i]);
    
    int max=0;
    auto start=vec.begin();
    auto itend=vec.end();
    
    for(auto i=vec.begin();i!=itend-1;i++){
        auto t_s=i;
        int diff=1;
        
        for(auto j=i+1;j!=itend;j++){
            
            if(*j-*i == diff){
                diff++;
                
                if(max<diff){
                    max=diff;
                    start=t_s;
                }
            }
        }
        
    }
    
    
    if(max==0){
        cout<<"No increasing sequence";
        return 0;
    }
    
    auto it1=start;
    auto it2=start+max;

    cout<<"Longest Increasing sequence is ";
    while(it1!=it2){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<" which has a length of "<<max<<".";
    

    return 0;
}
