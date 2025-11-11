#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
 class Person {
private: 
string name;
int id;

public: 
Person (name, id) {
    this.name = name;
    this.id = id;
}
Person () {
}

display() {
    cout << "Name:" << name << endl;
    cout << "ID" << id << endl;
}

 }











#endif
