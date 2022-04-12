#include "student.h" 
// include getter and setter for every attribute
//constructor
student::student()
{
firstname = "";
lastname = "";
id = 0;
birth = "";
gpa = 0.0;
startyear = 0;
completed_credit = 0;
program = "";
}
//list of getter functions
string student::getfirstname(){
    return firstname;
}
string student::getlastname(){
    return lastname;
}
int student::getid(){
    return id;
}
string student::getbirth(){
    return birth;
}
double student::getgpa(){
    return gpa;
}
int student::getstartyear(){
    return startyear;
}
int student::getcompleted_credit(){
    return completed_credit;
}
string student::getprogram(){
    return program;
}
//list of setter functions
void student::setfirstname(string firstname1){
    firstname = firstname1;
}
void student::setlastname(string lastname1){
    lastname = lastname1;
}
void student::setid(int id1){
    id = id1;
}
void student::setbirth(string birth1){
    birth = birth1;
}
void student::setgpa(double gpa1){
    gpa = gpa1;
}
void student::setstartyear(int startyear1){
    startyear = startyear1;
}
void student::setcompleted_credit(int completed_credit1){
    completed_credit = completed_credit1;
}
void student::setprogram(string program1){
    program = program1;
}
//list of the other functions
bool student::completeprogram(){
    if (program == "bachelor"){
        if (completed_credit == 140)
            return true;
        else 
            return false;
    }
    if (program == "master"){
        if (completed_credit == 16)
            return true;
        else
            return false;
    }
    if (program == "phd"){
        if(completed_credit == 12)
            return true;
        else
            return false;
    }
}
string student::studentstatus(){
    if (gpa >= 3.5)
        return "A+";
    if(gpa >= 3 && gpa < 3.5)
        return "A";
    if(gpa >= 2.5 && gpa < 3)
        return "B";
    if(gpa >=2 && gpa <2.5)
        return "C";
    if(gpa < 2 )
        return "D";
    else
        return "Error";
}
void student::print_std_info(){
    cout<<firstname<<endl;
    cout<<lastname<<endl;
    cout<<id<<endl;
    cout<<birth<<endl;
    cout<<gpa<<endl;
    cout<<startyear<<endl;
    cout<<completed_credit<<endl;
    cout<<program<<endl;
}
int student::compare_gpa(student student1){
    if (gpa > student1.getgpa())
        return id;
    else
        return student1.getid();
}

