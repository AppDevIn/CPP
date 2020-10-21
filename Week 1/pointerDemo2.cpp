#include <iostream>
using namespace std;

int changeValue(int x, int *y){
    x += 10;
    *y +=10;
}

int main(int argc, char const *argv[])
{
    int x = 30;
    int y = x;

    changeValue(x, &y);

    cout << "\nThe value of x: " << x;
    cout << "\nThe value of y: " << y;


    return 0;
}


