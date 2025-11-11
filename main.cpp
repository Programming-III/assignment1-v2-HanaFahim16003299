#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
 class Person {
private: 
string name;
int id;

public: 

Person:: Person (name, id) {
    this.name = name;
    this.id = id;
}
Person () {
    name = "";
    id = 0;
}
~Person();

display() {
    cout << "Name:" << name << endl;
    cout << "ID" << id << endl;
}

 }







// ==================== Student Class Implementation ====================


class Student {
    private:
    int yearLevel;
    string major;

public:
Student:: Student (int yearLevel, string major) {
    this. yearLevel = yearLevel;
    this.major = major;
}
Student:: Student () {
     yearLevel = 0;
     major = "";

}

void Student::display() {
cout<< "Year level:" << cout yearlevel << endl;
cout << "major:" << major << endl;
    }

    
}


// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
