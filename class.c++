#include <iostream>
using namespace std;

// Define a class
class teacher {                    /// its also encapsulation 
//  properties 
private:
    double salary;
public:
    string  name;
    int age;
    string subject;
    


// methods
    void displayInfo() {
        cout << "Teacher Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: $" << salary << endl;
    } 
    

    // setter for salary
    void setSalary(double sal) {
        salary = sal;
    }

    // getter for salary
    double getSalary() {
        return salary;
    }   
};


int main() {

    // object creation
    teacher t1;
    t1.name = "John Doe";
    t1.age = 35;
    t1.subject = "Mathematics";     
    t1.setSalary(50000); // setting salary using setter method
    // cout << "Teacher Name: " << t1.name << endl;
    // cout << "Age: " << t1.age << endl;
    // cout << "Subject: " << t1.subject << endl;
    // cout << "Salary: $" << t1.salary << endl;

    t1.displayInfo();
    
  
    return 0;
}