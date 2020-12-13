#include<string> 
#include<iostream> 
#include <cmath>
#include "Dictionary.cpp"
#include<algorithm> 

using namespace std; 

int hash1(string str) 

{ 

     int hash = 0; 

     for (int i=0; i< str.length(); i++) 

          hash = hash * 31 + int(str.at(i)); 

     return hash; 

} 

 

int hash2(string str) 

{ 

     int hash = 0; 

     

     int skip = max(1, int(str.length()/4)); 

     for (int i=0; i< str.length(); i+=skip) 

          hash = hash * 31 + int(str.at(i)); 

     return hash; 

} 
int main(int argc, char const *argv[])
{
    Dictionary d;

    d.add("Jeya", 4567890);
    d.add("Zac", 4567890);
    d.add("Tom", 4567890);
    d.add("John", 4567890);
    d.add("Kill me", 4567890);
    d.add("Hellp", 4567890);
    d.add("Die", 4567890);
    d.add("Eillen", 4567890);

    

    d.replace("Jeya", 878787);
    d.print();
    


    return 0;
}


//  int main() 
//  { 

//     Dictionary dict; 

//     // statement to initialise NUM_WORDS 

//     for (int i = 0; i < NUM_WORDS; i++) 
//     { 

//         string word = getWord(); 

//         int count = dict.get(word);
//         if(count <= 0){
//             dict.add(word, count +1);
//         } else {
//             dict.replace(word, count + 1);
//         }
//     } 

//  } 