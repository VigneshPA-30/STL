
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*
    two matrix is intialized using vector
    checks whether the matrix can be multiplied
    
    innitializing a result vector with no of rows and another vector as the arguments.
    calculating matrix mul and storing in res matrix
    printing the resulting matrix
    
*/


int main()
{
    vector<vector<int>> matrix_1={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix_2={{1,2,3},{4,5,6},{7,8,9}};
    
    

      if(matrix_1[0].size() != matrix_2.size()){
         cout<<"Matrix cannot be multiplied";
         return 0;
      }
  
   
  vector<vector<int>> res_matrix(matrix_1.size(),vector<int>(matrix_2[0].size(),0));
   
  
   
  for(int l1=0;l1<matrix_1.size();l1++){
      for(int l2=0;l2<matrix_2[0].size();l2++){
          for(int c=0;c<matrix_2.size();c++){
             
              res_matrix[l1][l2]+=(matrix_1[l1][c]*matrix_2[c][l2]);
          }
      }
  }
  
  
     for(auto &r:res_matrix){
      for(int c:r){
          cout<<c<<" ";
      }
      cout<<endl;
  }
    

    return 0;
}
