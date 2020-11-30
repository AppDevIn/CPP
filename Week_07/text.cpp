#include <iostream>

using namespace std;

void count(int n);

int main(int argc, char const *argv[])
{
    count(10);
    return 0;
}


void count(int n){
    if(n != 0){
        count(n-1);
    } else{
        return;
    }

    cout << n << endl;

}