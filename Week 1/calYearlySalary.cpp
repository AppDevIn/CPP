#include <iostream>
using namespace std;


class Employee{

private:
    string p_firstName;
    string p_lastName;
    double p_salary;


public:

    // Getters
    double getSalary(){
        return p_salary;
    }
    

    string getFirstName(){
        return p_firstName;
    }

    string getLastName(){
        return p_lastName;
    }

    //Setters
    void setSalary(double salary){
        if (salary < 0)
        {
            salary = 0;
        }else{
            p_salary = salary;
        }
    }

    void setFirstName(string firstName){
        firstName = firstName;
    }

    void setLastName(string lastName){
        p_lastName = lastName;
    }


    Employee(
        string firstName,
        string lastName,
        double salary){

            p_firstName = firstName;
            p_lastName = lastName;
            setSalary(salary);


    }





};

int main()
{
    Employee emp1("John", "Tan", 1300);
    Employee emp2("Long", "Martin", 2300);

    //Before 10% increase
    cout << "\nThe salary of " << emp1.getFirstName() << " is " << emp1.getSalary();
    cout << "\nThe salary of " << emp2.getFirstName() << " is " << emp2.getSalary();

    emp1.setSalary(emp1.getSalary() * 1.1);
    emp2.setSalary(emp2.getSalary() * 1.1);

    //After 10% increase
    cout << "\n\nAfter 10% increase";
    cout << "\nThe salary of " << emp1.getFirstName() << " is " << emp1.getSalary();
    cout << "\nThe salary of " << emp2.getFirstName() << " is " << emp2.getSalary();


    return 0;
}

