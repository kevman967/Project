#include "staff.h"
#include "student.h"
#include <fstream>
class student_staff{
public:
student *students;
staff *staffs;

student_staff();
void readstudent( student s[]);
void readstaff( staff sf[]);
void highest_gpa( student s[], int size);
int n_of_undergrad( student s[], int size);
void same_hire_year( staff sf[], int size, string year);
};