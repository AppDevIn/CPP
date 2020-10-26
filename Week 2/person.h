#include <string>

using namespace std;

class Person {
    private:
        string name;
        string telNo;
    public:
        Person();
        Person(string aName, string aTelNo);      
        void setName(string aName);
        string getName();
        void setTelNo(string aTelNo);
        string getTelNo();

};