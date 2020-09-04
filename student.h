#include <string>
#include <array>

using namespace std;

class Student
{
private:
    /* data */
    string v_StudentId;
    string v_FirstName;
    string v_LastName;
    string v_Email;
    int v_Age;
    array<int, 3> v_DaysToComplete;
    string v_Degree;

public:
    Student(/* args */);
    ~Student();

    // Getters
    int StudentId();
    string FirstName();
    string LastName();
    string Email();
    int Age();
    array<int, 3> DaysToComplete();
    string Degree();

    // Setters
    void SetStudentId(int id);
    void SetFirstName(string firstName);
    void SetLastName(string lastName);
    void SetEmail(string email);
    void SetAge(int age);
    void SetDaysToComplete(array<int, 3> daysToComplete);
    void SetDegree(string degree);

    // Print
    void Print();
};