#include <iostream>

using namespace std;

long power(int a,int n);

int main(int argc, char const *argv[])
{
    long value = power(10,9);
    cout << value << endl;
    return 0;
}

long power(int a, int n){

    if(n != 0){ return 10 * power(a, n-1); } 
    else { return 1; }
    
}