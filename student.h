#include <string>
#include <array>

using namespace std;

namespace MrChoke
{
    class Student
    {
        private:
            /* data */
            uint16_t v_StudentId;
            string v_FirstName;
            string v_LastName;
            string v_Email;
            uint8_t v_Age;
            array<uint8_t, 3> v_DaysToComplete;
            string v_Degree;


        public:
            Student(/* args */);
            ~Student();

            // Getters
            uint16_t StudentId();
            string FirstName();
            string LastName();
            string Email();
            uint8_t Age();
            array<uint8_t, 3> DaysToComplete();
            string Degree();

            // Setters
            void SetStudentId(uint16_t id);
            void SetFirstName(string firstName);
            void SetLastName(string lastName);
            void SetEmail(string email);
            void SetAge(uint8_t age);
            void SetDaysToComplete(array<uint8_t, 3> daysToComplete);
            void SetDegree(string degree);

            // Print
            void Print();
    };
}
