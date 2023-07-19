#include <iostream>
#include <fstream>
#include<map>
using namespace std;


/*
    Create a program that reads a text file and counts the occurrence of 
    each word using the C++ STL map container.
    
    Creating a new File named fileNew.txt
    Opening the file and reading the line word by word in the while loop.
    if word already present as keyword, increment the corrresponding value,
    otherwise add the word to key and assign value as 1.
    
    print the map created.
*/
int main()
{
    fstream newFile;
    map<string,int> mp;

  
    newFile.open("fileNew.txt",ios::out);
    if(newFile.is_open()){
            newFile<<"RANDOM WORDS APPLE CAT APPLE ORANGE LION VIGNESH WORDS VIGNESH VIGNESH EMBITEL EMBITEL VIGNESH\n";
            newFile.close();
    }
    

    newFile.open("fileNew.txt",ios::in);
     if(newFile.is_open()){
        string tp;
        
        while(newFile>>tp){
            if(mp.count(tp)>0){
                auto it=mp.find(tp);
                it->second+=1;
            }else{
                mp.insert(pair<string,int>(tp,1));
            }
        }
        
        newFile.close();
     }
     
     
     cout<<"WORD\tOCCURRENCE"<<endl;
     map<string, int>::iterator it = mp.begin();
    
     for(it;it!=mp.end();++it){
            cout << it->first << "\t" << it->second <<endl;
      }
      
      


    return 0;
}
