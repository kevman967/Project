#include "staff.cpp"
#include "student.cpp"
#include <fstream>

using namespace std;
class student_staff{
    public:
    student_staff();
    void highest_gpa();
    int n_of_undergrad();
    void same_hire_year(int);
    staff* staffptr;
    student* studentptr;
    private:
    int staffsize;
    int studentsize;
};