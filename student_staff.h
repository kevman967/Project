#include "staff.h"
#include "student.h"
#include <fstream>
class student_staff{
public:
student *students;
staff *staffs;

student_staff();
void readstudent(class student s[]);
void readstaff(class staff sf[]);
void highest_gpa(class student s[], int size);
int n_of_undergrad(class student s[], int size);
void same_hire_year(class staff sf[], int size, string year);
};