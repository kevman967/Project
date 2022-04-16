#include "student_staff.h"
#include <array>
student_staff::student_staff(){
    //student
    int line;
    
    ifstream ifstudent;
    ifstudent.open("students.txt");
    ifstudent >> line;
    studentsize = line;
    studentptr = new student[studentsize];
    for(int i=0;i<line;i++ ){
        string firstname,lastname,birth;
        char program;
        int id,startyear,completed_credit;
        double gpa;
        ifstudent >> firstname>>lastname>>id>>birth>>gpa>>startyear>>completed_credit>>program;
        
        studentptr[i].setfirstname(firstname);
        studentptr[i].setlastname(lastname);
        studentptr[i].setid(id);
        studentptr[i].setbirth(birth);
        studentptr[i].setgpa(gpa);
        studentptr[i].setstartyear(startyear);
        studentptr[i].setcompleted_credit(completed_credit);
        studentptr[i].setprogram(program);
    }
    ifstudent.close();
    ifstream ifstaff;
    ifstaff.open("staff.txt");
    ifstaff >> line;
    staffsize = line;
    staffptr = new staff[staffsize];
    for(int i=0;i<line;i++){
        string firstname,lastname;
        int id,number,currentsalary,datehired;
        double bonuscode;
        ifstaff >> firstname >> lastname>> id>>number>>datehired>>bonuscode>>currentsalary;
        staffptr[i].setfirstname(firstname);
        staffptr[i].setlastname(lastname);
        staffptr[i].setid(id);
        staffptr[i].setnumber(number);
        staffptr[i].setdatehired(datehired);
        staffptr[i].setbonuscode(bonuscode);
        staffptr[i].setcurrentsalary(currentsalary);
    }
    ifstaff.close();
}
void student_staff::highest_gpa(){
    int winner=0;
    for(int i=0;i<studentsize;i++){
        if(i==studentsize-1)
            break;
        if(studentptr[i+1].getgpa()>studentptr[winner].getgpa())
            winner = i+1;
    }
    cout << "Information of the student with the highest GPA"<<endl;
    studentptr[winner].print_std_info();
}
int student_staff::n_of_undergrad(){
    int sum=0;
    for(int i =0;i<studentsize;i++){
        if(studentptr[i].getprogram() == 'b')
            sum++;
    }
    return sum;
}
void student_staff::same_hire_year(int year){
    for(int i =0; i<staffsize;i++){
        if(staffptr[i].getdatehired() == year){
            cout<< staffptr[i].getfirstname()<<" "<<staffptr[i].getlastname()<<" was hired in "<< year<<endl;
        }
    }
}