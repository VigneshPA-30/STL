/*
    Write a C++ program that finds the longest palindrome in a given string using
    the STL string and algorithms.
    
    Here input is given from user woth space between each word through getline func.
    
    Then using istringstream func and getline funcwords are streamed to the while 
    loop in word variable.
    
    isPalindrome func checks palindrome and max_len is also checked in if condition
    using &&.
    
    if both true longest_palin and max_len variable is updated. 

*/

#include <iostream>
#include<string>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int isPalindrome(string s_1){
    
    string s_2=s_1;
    reverse(s_2.begin(),s_2.end());
   return s_2==s_1;
}

int main()
{
   string str="civic cb level wiuby kayak wicb madam  refer viebhe oevntqpothoeth oivbhtoewto qwertrewq b sckg";
   int max_len=0;
  getline(cin,str);
   istringstream iss(str);
   string word,longest_palin;
   
   while(getline(iss,word,' ')){
       
       if(isPalindrome(word) && word.length()>max_len){
       
           max_len=word.length();
            longest_palin=word;
       }
   }
   
   cout<<"Longest Palindrome is "<<longest_palin<<" with length of "<<max_len<<endl;
    return 0;
}
