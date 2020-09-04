#include <string>
#include <array>

using namespace std;

class Student
{
private:
    /* data */
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    array<int, 3> daysToComplete;
    string degreeProgram;

public:
    Student(/* args */);
    ~Student();

    // Getters
    string getStudentID();
    string FirstName();
    string LastName();
    string getEmailAddress();
    int Age();
    array<int, 3> getDaysToComplete();
    string Degree();

    // Setters
    void setStudentId(string id);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void SetDaysToComplete(array<int, 3> daysToComplete);
    void setDegree(string degree);

    // print
    void print();
};