// // Inheritancr  code 
// #include <iostream>
// using namespace std;

// class Person {
//     public:
//     string name;
//     int age;

//     // // defaut constructor 
//     // Person(){

//     // }

    

//     Person(string name , int age) { // parameterized constructor
//         this->name = name;
//         this->age = age;
        
//     }
    
// };

// class Student : public Person {
//     public:
//    int rollNumber;

// //    Student (){

// //    }

//    Student(string name , int age , int rollNumber) : Person(name ,age ) { // calling base class constructor
//        this->rollNumber = rollNumber;
//    }



//    void displayInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "roll No. " << rollNumber << endl;
//     }

   
// };

// int main(){
// //    Student t1;
// //    t1.name = "Alice";
// //    t1.age = 20;
// //    t1.rollNumber = 34;

// Student s1("akash ", 20, 32);

//     s1.displayInfo();

//     return 0;
// }

//////////////////////////////// multi level inheritance ////////////////////////

// #include <iostream>
// using namespace std;
// class Person {
//     public:
//     string name;
//     int age;

    
    
// };  

// class student : public Person {
//     public:
//    int rollNumber;

   
// };

// class Gradstudent : public student {
//     public:
//    string degree;

   
// };

// int main(){
//    Gradstudent g1;
//    g1.name = "akash";
//    g1.age = 20;
//    g1.rollNumber = 32;
//    g1.degree = "Btech";

//    cout << "Name: " << g1.name << endl;
//    cout << "Age: " << g1.age << endl;
//    cout << "roll No. " << g1.rollNumber << endl;
//    cout << "Degree: " << g1.degree << endl;
   

//     return 0;
// }   


// /////////////////////// multiple inheritance ////////////////////////////

// #include <iostream>
// using namespace std;
// class Person {
//     public:
//     string name;
//     int age;

    
    
// };
// class student {
//     public:
//    int rollNumber;

   
// };
// class Gradstudent : public Person , public student {
//     public:
//    string degree;

   
// };
// int main(){
//    Gradstudent g1;
//    g1.name = "akash";
//    g1.age = 20;
//    g1.rollNumber = 32;
//    g1.degree = "Btech";

//    cout << "Name: " << g1.name << endl;
//    cout << "Age: " << g1.age << endl;
//    cout << "roll No. " << g1.rollNumber << endl;
//    cout << "Degree: " << g1.degree << endl;
   

//     return 0;
// }


// /////////////////////// hierarchial inheritance ////////////////////////////

#include <iostream>
using namespace std;
class Person {
    public:
    string name;
    int age;

    
    
};
class student : public Person {
    public:
   int rollNumber;

   
   
};
class Teacher : public Person {
    public:
   string subject;

   
   
};

int main(){
   student s1;
   s1.name = "akash";
   s1.age = 20;
   s1.rollNumber = 32;

   cout << "Name: " << s1.name << endl;
   cout << "Age: " << s1.age << endl;
   cout << "roll No. " << s1.rollNumber << endl;

   Teacher t1;
   t1.name = "rahul";
   t1.age = 30;
   t1.subject = "maths";

   cout << "Name: " << t1.name << endl;
   cout << "Age: " << t1.age << endl;
   cout << "Subject: " << t1.subject << endl;

    return 0;
}