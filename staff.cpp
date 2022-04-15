#include "staff.h"
using namespace std;
//getter function
staff::staff(){
    firstname ="";
    lastname = "";
    id = 0;
    number = 0;
    datehired = "";
    bonuscode = 0.0;
    currentsalary = 0;
}
string staff::getfirstname(){
    return firstname;
}
string staff::getlastname(){
    return lastname;
}
int staff::getid(){
    return id;
}
int staff::getnumber(){
    return number;
}
string staff::getdatehired(){
    return datehired;
}
double  staff::getbonuscode(){
    return bonuscode;
}
int staff::getcurrentsalary(){
    return currentsalary;
}
// list of setter functions
void staff::setfirstname(string firstname1){
    firstname = firstname1;
}
void staff::setlastname(string lastname1){
    lastname= lastname1;
}
void staff::setid(int id1){
    id = id1;
}
void staff::setnumber(int number1){
    number = number1;
}
void staff::setdatehired(string datehired1){
    datehired=datehired1;
}
void staff::setbonuscode(double bonuscode1){
    bonuscode=bonuscode1;
}
void staff::setcurrentsalary(int currentsalary1){
    currentsalary= currentsalary1;
}
void staff::print_stf_info(){
    cout<<firstname<<endl;
    cout<<lastname<<endl;
    cout<<id<<endl;
    cout<<number<<endl;
    cout<<datehired<<endl;
    cout<<bonuscode<<endl;
    cout<<currentsalary<<endl;
}
void staff::calculate_salary(){
    currentsalary = currentsalary + currentsalary * bonuscode;
}
string staff::compare_exp(staff staff1){
    string fullname = firstname + " "+ lastname;
    string fullname1 = staff1.getfirstname()+ " "+ staff1.getlastname();
    if (datehired > staff1.getdatehired())
        return fullname;
    else return fullname1;
}