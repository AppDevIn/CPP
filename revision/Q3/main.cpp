#include <iostream>

using namespace std;

int gcd(int x, int y){

    if (y == 0) return x;

    return gcd(y, x%y);

}


int main(int argc, char const *argv[])
{
    cout << gcd(24,54) << endl;
    cout << gcd(8,12) << endl;
    cout << gcd(24,60) << endl;
    cout << gcd(41,27) << endl;

    int x = 8; int y = 12;

    while(y != 0){

        int temp = x%y;
        x = y;
        y = temp;
    }

    cout << x << endl;
    return 0;
}
