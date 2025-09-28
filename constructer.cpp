// #include<iostream>
// using namespace std;

// class student{
//     public:
//     string name;
//     int age;
//     // constructor
//     student(string n, int a){
//         name = n;
//         age = a;
//     }

//     void displayInfo(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//     }
// };

// int main(){
//     // object creation with parameterized constructor
//     student s1("Alice", 20);
//     s1.displayInfo();

//     student s2("Bob", 22);
//     s2.displayInfo();

//     return 0;
// }

// ////////////////// code  - 2 /////////////////////////////

// #include <iostream>
// #include <string>
// using namespace std;

// class Teacher {
// public:
//     string name;
//     string subject;
//     string department;
//     double salary;

//     // ✅ Constructor (runs automatically when object is created)
//     Teacher(string n, string sub, string dept, double sal) {
//         name = n;
//         subject = sub;
//         department = dept;
//         salary = sal;
//     }

//     // Method to display info
//     void displayInfo() {
//         cout << "Teacher Name: " << name << endl;
//         cout << "Subject: " << subject << endl;
//         cout << "Department: " << department << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// int main() {
//     // Creating object and passing values through constructor
//     Teacher t1("Dr. Sharma", "Computer Science", "CSE", 50000);

//     // Display info
//     t1.displayInfo();

//     return 0;
// }

///////////////////////////////  copy constructor ////////////

// What is Copy Constructor?
//👉 A Copy Constructor is a special constructor which creates a new object as a copy of an existing object.

// #include <iostream>
// using namespace std;

// class teacher {

//     public:
//     string name;
//     int age;

//     // parameterized constructor

//     teacher(string n, int a){
//         name = n;
//         age = a;
//     }
//     // copy constructor
//     void displayInfomation(){
//        cout<<"name"<< name <<endl;
//        cout<< "age " << age << endl;
//     }
// };
    

// int main(){
//     teacher t1("Dr. Sharma", 45);

//     teacher t2 = t1; // copy constructor is called here

//     t2.displayInfomation();

//     return 0;

// }



// ////////////////////////////// Destructure //////////////////////

//  it is opposite of constructor
//  A Destructor is a special function of a class.
// Its name is same as the class but with a tilde (~) symbol.
// It is called automatically when an object goes out of scope or is deleted. 

#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    string subject;

public:
    // Constructor
    Teacher(string n, string s) {
        name = n;
        subject = s;
        cout << "Constructor called: Teacher created" << endl;
    }

    // Destructor
    ~Teacher() {
        cout << "Destructor called: Teacher destroyed" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Subject: " << subject << endl;
    }
};

int main() {
    // Creating object
    Teacher t1("Akash", "C++");

    t1.display();

    // Destructor will be called automatically here
    return 0;
}



