#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class convert
{
int number;
char *num_string;
public:
void set_number(int n)
{
    number=n;
} // Assign n to number
void set_num_string(char *a)
{
    num_string=new char[strlen(a)+1];
    strcpy(num_string,a);
} // Assign string a to num_string
char *get_num_string()
{
    return num_string;
} // Return num_string
void reverse_num_string()
{
    strrev (num_string);
} // Reverse num_string
void concate_to_num_string(int n)
{

        int i;
        char a[100];
         while(n!=0)
         {
             a[i]=n%10+48;
             n=n/10;
             i++;
         }
         a[i]='/0';
         strrev(a);
         cout<<strcat(num_string,a);
}// Convert n to a string then concate it with num_string
bool check_palindrome()
{
        int r;
        char *s;
        s=num_string;
        strrev(s);
        strcmp(s,num_string);
        return r;

}

// Check if num_string is a palindrome
};
int main()
{

    convert a;
    a.set_num_string("madam");
    a.reverse_num_string();
    cout<<a.get_num_string()<<endl;
     a.concate_to_num_string(123);
     a.reverse_num_string();
      if(a.check_palindrome()==0)
        cout<<"Palindrome"<<endl;
     else
        cout<<"Not Palindrome"<<endl;


   return 0;

}

