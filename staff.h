#include <string>
#include <iostream>
using namespace std;
class staff
{
    public:
    //constructor
    staff();
    //list of getter functions
    string getfirstname();
    string getlastname();
    int getid();
    int getnumber();
    string getdatehired();
    double getbonuscode();
    int getcurrentsalary();
    //list of setters
    void setfirstname(string);
    void setlastname(string);
    void setid(int);
    void setnumber(int);
    void setdatehired(string);
    void setbonuscode(double);
    void setcurrentsalary(int);
    //other functions
    void print_stf_info();
    void calculate_salary();
    string compare_exp(staff);
    //attributes for staff
    private:
    string firstname;
    string lastname;
    int id;
    int number;
    string datehired; 
    double bonuscode;
    int currentsalary;
};