#include <iostream>
#include "student.h"

// Constructor
Student::Student(/* args */)
{
    age = 30;
    daysToComplete[0] = 0;
    daysToComplete[1] = 1;
    daysToComplete[2] = 3;
    emailAddress = "bad@bad.com";
    firstName = "Mr";
    lastName = "Choke";
    studentID = 42069;
    degreeProgram = "CS";
}

// Destructor
Student::~Student()
{
}

// Getters
int Student::getStudentID() {
    return studentID;
}

string Student::FirstName() {
    return firstName;
}

string Student::LastName() {
    return lastName;
}

string Student::getEmailAddress() {
    return emailAddress;
}

int Student::Age() {
    return age;
}

array<int, 3> Student::getDaysToComplete() {
    return daysToComplete;
}

string Student::Degree() {
    return degreeProgram;
}

// Setters
void Student::setStudentId(int id) {
    studentID = id;
}

void Student::setFirstName(string firstName) {
    firstName = firstName;
}

void Student::setLastName(string lastName) {
    lastName = lastName;
}

void Student::setEmail(string email) {
    emailAddress = email;
}

void Student::setAge(int age) {
    age = age;
}

void Student::SetDaysToComplete(array<int, 3> daysToComplete) {
    daysToComplete = daysToComplete;
}

void Student::setDegree(string degree) {
    degreeProgram = degree;
}

// print
void Student::print() {
    cout << "A1 [tab] First Name: ";
    cout << firstName;
    cout << " [tab] Last Name: ";
    cout << lastName;
    cout << " [tab] Age: ";
    cout << to_string(age);
    cout << " [tab] daysInCourse: ";
    cout << "{";
    for (int i=0; i<daysToComplete.size(); i++) {
        cout << to_string(daysToComplete[i]);
        if (i < daysToComplete.size() - 1)
        cout << ",";
    }
    cout << "} ";
    // days
    cout << " Degree Program: ";
    cout << degreeProgram << endl;
}
