// // /////////////////////////polymorphisum overloading   ya  funtion overloading ///////////////////////
// #include <iostream>
// using namespace std;

// class Print {
//     public:
//     void show(int i) {
//         cout << "Integer: " << i << endl;
//     }
//     void show(double f) {
//         cout << "Float: " << f << endl;
//     }
//     void show(string s) {
//         cout << "String: " << s << endl;
//     }
// };

// int main() {
//     Print obj;
//     obj.show(5);        // Calls show(int)
//     obj.show(5.5);      // Calls show(double)
//     obj.show("Hello");  // Calls show(string)
//     return 0;
// }

/////////////////////////////////////////////////////////////// constructor overloading ////////////////////////////
#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    string subject;
    int salary;

    // Default Constructor
    Teacher() {
        name = "Unknown";
        subject = "None";
        salary = 0;
    }

    // Parameterized Constructor
    Teacher(string n, string s, int sal) {
        name = n;
        subject = s;
        salary = sal;
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Subject: " << subject << ", Salary: " << salary << endl;
    }
};

int main() {
    // Default constructor called
    Teacher t1;
    t1.display();

    // Parameterized constructor called
    Teacher t2("Akash", "Maths", 50000);
    t2.display();

    return 0;
}



// //  /////////////////////////// polymorphisum overriding ///////////////////////
// #include <iostream>
// using namespace std;
// class Base {
//     public:
//     void display() {
//         cout << "Base class display function called." << endl;
//     }
// };
// class Derived : public Base {
//     public:
//     void display() { // overriding the base class method
//         cout << "Derived class display function called." << endl;
//     }
// };
// int main() {
//     Base* basePtr; // Base class pointer
//     Derived derivedObj; // Derived class object
//     basePtr = &derivedObj;

//     basePtr->display(); // Calls Base class display function (no polymorphism without virtual)

//     return 0;
// }
