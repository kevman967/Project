#include "staff.h"
#include "student.h"
#include <fstream>
class student_staff{
public:
student *s;
staff *sf;

student_staff();
void ReadStudent(class Student s[]);
void ReadStaff(class Staff sf[]);
void Highest_GPA(class Student s[], int size);
int N_of_UnderGrad(class Student s[], int size);
void Same_Hire_Year(class Staff sf[], int size, string year);
};