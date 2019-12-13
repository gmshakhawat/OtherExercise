#include<iostream>
#include<conio.h>
using namespace std;
class student
{
protected:
    int r;
  //declare student roll_no as protected variable of this class.
public:
   void set_num(int a)
    {
        r=a;
    }

    int sget()
    {
        return r;
    }
 //write methods to set and get roll_number;
};
class test:public student  // class test inherits class student publicly.
{
protected:
    double sm;
//declare student's marks as protected variable
public:
    void set_marks(double a)
    {
        sm=a;
    }
    int tget()
    {
        return sm;
    }

//write methods to set and get student's marks;

};
class sports
{
//declare sports_score as a protected variable;
protected:
double spc;
public:
 //write methods to set and get sport's score;
 void set_score(double s)
 {
     spc=s;
 }
 int sget()
 {
     return spc;
 }

};
class result:public test,public sports //this class inherits  test and sports class as publicly
{
 float total;
public:
 void display(void)
 {
     total=sm+spc;
     cout<<total<<endl<<r<< " " <<sm<<" "<<spc;
   // add student's marks and score and save it in total.
   // display the total marks;
   //implement this function so that it can show the student's roll_no,marks and sport's score.

 }
};
int main()
{
 result stu;
 stu.set_num(12);
 stu.set_marks(87.6);
 stu.set_score(5.5);
 stu.display();

}
