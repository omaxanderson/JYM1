#include "student.h"
#include "degree.h"
#include<iostream>

using namespace std;

int main() {
    Student* MyStudent = new Student();
    MyStudent->print();
    DegreeProgram d = SOFTWARE;
    cout << "Software: " << d << endl;
    return 0;
}
