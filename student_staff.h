#include "staff.h"
#include "student.h"
#include <fstream>
class student_staff{
public:
student *students;
staff *staffs;
student_staff();
void readstudent(class student students);
void readstaff(class staff staffs);
void highest_gpa(class student students[], int size);
int n_of_undergrad(class student students[], int size);
void same_hire_year(class staff staffs[],int size, string year);
};