#include <string>
#include <iostream>
using namespace std;
class student{
public:
student();
// list of getters
string getfirstname();
string getlastname();
int getid();
string getbirth();
double getgpa();
int getstartyear();
int getcompleted_credit();
string getprogram();
//list of setters
void setfirstname(string);
void setlastname(string);
void setid(int);
void setbirth(string);
void setgpa(double);
void setstartyear(int);
void setcompleted_credit(int);
void setprogram(string);
//list of the other functions
bool completeprogram();
string studentstatus();
void print_std_info();
int compare_gpa(student);
//list of attributes for student
private:
string firstname;
string lastname;
int id;
string birth;
double gpa;
int startyear;
int completed_credit;
string program;
};