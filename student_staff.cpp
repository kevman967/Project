#include "student_staff.h"

student_staff::student_staff()
{ //constructor
students = new student[5];
staffs = new staff[5];
readstudent(students);
readstaff(staffs);
}
void student_staff::readstudent(class student studentDetails[])
{
ifstream in;
int totalLines, num;
float f;
string temp;
int tempint;

in.open("students.txt");
in >> totalLines;
int i = 0;
for (i = 0; i < totalLines; i++)
{
in >> temp;
studentDetails[i].setfirstname(temp);
in >> temp;
studentDetails[i].setlastname(temp);
in >> num;
studentDetails[i].setid(num);
in >> temp;
studentDetails[i].setbirth(temp);
in >> f;
studentDetails[i].setgpa(f);
in >> temp;
studentDetails[i].setstartyear(tempint);
in >> num;
studentDetails[i].setcompleted_credit(num);
in >> temp;
studentDetails[i].setprogram(tempint);
}
cout << "\nRead student.txt Sucessfully..." << endl;
in.close();
}
void student_staff::readstaff(class staff StaffData[])
{
fstream in;
string temp, date;
int tempID, totalLines;
long tempNo;
char bonus;
in.open("staff.txt");
in >> totalLines;
for (int i = 0; i < totalLines; i++)
{
in >> temp;
StaffData[i].setfirstname(temp);
in >> temp;
StaffData[i].setlastname(temp);
in >> tempID;
StaffData[i].setid(tempID);
in >> tempID;
StaffData[i].setnumber(tempNo);
in >> date;
StaffData[i].setdatehired(date);
in >> bonus;
StaffData[i].setbonuscode(bonus);
in >> tempNo;
StaffData[i].setcurrentsalary(tempNo);
}
cout << "Read staff.txt Sucessfully..." << endl;
}
void student_staff::highest_gpa(class student students[], int size)
{ //function Highest_GPA
double max = students[0].getgpa();
int index = 0;
for (int i = 1; i < size; i++)
{
if (students[i].getgpa() > max)
{
max = students[i].getgpa();
index = i;
}
}
cout << students[index].getfirstname() << " " << students[index].getlastname() << " Has the highest Gpa" << endl;
}
int student_staff::n_of_undergrad(class student students[], int size)
{
int count = 0;
for (int i = 0; i < size; i++)
{
if (students[i].completeprogram() == true)
count++;
}
return count;
}
void student_staff::same_hire_year(class staff staffs[], int size, string year)
{

for (int i = 0; i < size; i++)
{
string date = staffs[i].getdatehired();

if (date.substr(5, 7) == year)
{
cout << endl
<< "Name: " << staffs[i].getfirstname() << " "
<< staffs[i].getlastname() << ", Year: " << date.substr(5, 7) << endl;
}
}
}

