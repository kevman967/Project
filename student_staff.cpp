#include "student_staff.h"
student_staff::student_staff(){
    students = new student[5];
    staffs = new staff[5];
    readstudent(students);
    readstaff(staffs);
}
void student_staff::readstudent(class student studentdetails){
    ifstream in;
    int totallines, num;
    float f;
    string temp;

    in.open("student.txt");
    in >> totallines;
    int i = 0;
    for(i = 0; i<totallines; i++){
        in >> temp;
        studentdetails[i].setfirstname(temp);

    }
} 


