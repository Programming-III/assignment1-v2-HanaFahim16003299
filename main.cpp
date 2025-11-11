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
 cout<< "name:" << name;
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
    cout<< "Experience:" << experienceYears<< endl;
}



// ==================== Course Class Implementation ====================

    Course:: Course (string courseCode, string courseName, int maxStudents, Student* students, int currentStudents) {
this.courseCode = courseCode;
this.courseName = courseName;
this.maxStudents= maxStudeents;
Student-> students;
this.currentStudents= currentStudents;
    }
    Course::Course() {
        courseCode= "";
        courseName = "";
        maxStudents= 0;
        students = 0;
        currentStudents =0;
    }
    ~Course() {
        delete students;
    }

    Course:: addStudent(const Student&s) {
        Student* = student++;
    }
Person:: displayCourseInfo() {
cout<< "Course:" << courseCode;
cout<< courseName << endl;
cout<< "Max students:" << maxStudents << endl;
cout<< "Currently Enrolled" << currentStudents << endl;
}
}





// ==================== Main Function ====================
int main() {
   Course c;
    c ("CS101", "Introduction to programming", 3, "Omar NabilID(2202));
    c.displayCourseInfo();
    cout<< "Instructor Info:" << endl;
Instructor i;
    i("Dr.Lina Khaled", "Computer Science");
    cout<< "Instructor Info:" << endl;
    i.display();
    cout<< "Student Info: << endl;
    Student s;
    s ( "Omar Nabil", 2, "Informatics");




        
      
    
    return 0;
}
