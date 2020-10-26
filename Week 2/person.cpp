#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(){}


Person::Person(string aName, string aTelNo){
    name = aName;
    telNo = aTelNo;
    
}      
void Person:: setName(string aName){
    name = aName;
};
string Person:: getName(){
    return name;
};
void Person:: setTelNo(string aTelNo){
    telNo = aTelNo;
};
string Person::getTelNo(){
    return telNo;
};