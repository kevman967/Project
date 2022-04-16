#include "student_staff.cpp"
int main(){
    student_staff one;
    one.highest_gpa();
    cout <<"There are "<< one.n_of_undergrad()<<" undergraduate students"<<endl;
    one.same_hire_year(1999);
    student student1;
    student1.setfirstname("kevin");
    student1.setlastname("patel");
    student1.setid(423134);
    student1.setbirth("12/13/2000");
    student1.setgpa(3.4);
    student1.setstartyear(2018);
    student1.setcompleted_credit(140);
    student1.setprogram('b');
    cout<<student1.getfirstname()<<student1.getlastname()<<student1.getid();
    cout<<student1.getbirth()<<student1.getgpa()<<student1.getstartyear();
    cout<<student1.getcompleted_credit()<<student1.getcompleted_credit();
    cout<<endl;
    cout<<"did the student complete his/her program?:(1 for yes 0 for no) "<<student1.completeprogram()<<endl;
    student1.print_std_info();
    cout<<"the ID of the person with the highest gpa is"<<student1.compare_gpa(one.studentptr[0]);

    staff staff1;
    staff1.setfirstname("joe");
    staff1.setlastname("biden");
    staff1.setid(13213);
    staff1.setnumber(514448438);
    staff1.setdatehired(1999);
    staff1.setbonuscode(0.04);
    staff1.setcurrentsalary(60000);
    cout<<staff1.getfirstname()<<staff1.getlastname()<<staff1.getid();
    cout<<staff1.getnumber()<<staff1.getdatehired()<<staff1.getbonuscode();
    cout<<staff1.getcurrentsalary()<<endl;
    staff1.print_stf_info();
    staff1.calculate_salary();
    cout<<"the new salary is:"<<staff1.getcurrentsalary()<<endl;
    cout<<"the person with the most work experience is: "<<staff1.compare_exp(one.staffptr[0]);


}