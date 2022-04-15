#include "staff.h"
#include "student.h"
#include <fstream>
using namespace std;
class student_staff{
    public:
    student_staff();
    void highest_gpa();
    int n_of_undergrad();
    void same_hire_year();
    private:
    staff* staffptr;
    student* studentptr;
};