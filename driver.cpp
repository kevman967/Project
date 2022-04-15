#include <iostream>
#include <fstream>
#include "student.h"
#include "staff.h"
#include "student_staff.h"

using namespace std;

int main()
{

student_staff obj;
cout << "\n checking the Student for Higest GPA ..." << endl;
obj.highest_gpa(obj.students, 5);
cout << endl
<< "\n Calculating the Total no of graduates ..." << endl;
cout << "Total number of graduates: " << obj.n_of_undergrad(obj.students, 5) << endl;
cout << "\n Staff with Same hire year ";
obj.same_hire_year(obj.staffs, 5, "2007");
}