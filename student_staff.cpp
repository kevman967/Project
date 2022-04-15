#include "student_staff.h"
student_staff::student_staff(){
    //student
    int line;
    ifstream ifstudent;
    ifstudent.open("students.txt");
    ifstudent >> line;
    int arraysize = line;
    studentptr = new student[arraysize];
    for(int i=0;i<line;i++ ){
        string firstname,lastname,birth;
        char program;
        int id,startyear,completed_credit;
        double gpa;
        ifstudent >> firstname;//>>lastname>>id>>birth>>gpa>>startyear>>completed_credit>>program;
        
        studentptr[i].setfirstname(firstname);/*
        studentptr[i].setlastname(lastname);
        studentptr[i].setid(id);
        studentptr[i].setbirth(birth);
        studentptr[i].setgpa(gpa);
        studentptr[i].setstartyear(startyear);
        studentptr[i].setcompleted_credit(completed_credit);
        studentptr[i].setprogram(program);
        */
    }
    ifstudent.close();
    for(int i=0;i>line;i++){
        cout<<studentptr[i].getfirstname();
    }
    
}