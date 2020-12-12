#include<string> 
#include<iostream> 
#include "Dictionary.cpp"

using namespace std; 

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
