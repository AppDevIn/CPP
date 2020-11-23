#include <iostream>
#include <string>
#include "Dictionary.cpp"

using namespace std;

int main(int argc, char const *argv[])
{

    Dictionary d;

    d.add("Pamela", "64606722");
    d.add("PohSeng", "64608687");
    d.add("Wesley", "64607237");
    d.add("WeeChong", "64606854");

    cout << "Print 01" << endl;
    d.print();

    d.add("Eugene", "64608256");
    d.add("Saiful", "64608206");

    cout << "Print 02" << endl;
    d.print();

    d.add("PohSeng", "12345678");

    d.remove("Eugene");

    cout << "Print 03" << endl;    
    d.print();

    return 0;
}
