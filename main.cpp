#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================


Person:: Person (name, id) {
    this.name = name;
    this.id = id;
}
Person:: Person () {
    name = "";
    id = 0;
}
~Person();

Person:: display() {
    cout << "Name:" << name << endl;
    cout << "ID" << id << endl;
}

 }







// ==================== Student Class Implementation ====================

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

    Instructor:: Instructor (string department, int experienceYears) {
        this.department = department;
        this.experienceYears= experienceYears;
    }
    Instructor::Instructor() {
        department= "";
        experienceYears= 0;
    }

   
void Instructor:: display() {
    cout<< "Department:" << department<< endl;
    cout<< "Experience Years:" << experienceYears<< endl;
}



// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
