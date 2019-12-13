#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class convert
{
int number;
char *num_string,*rev;
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
    rev=new char [strlen(num_string)+1];
    strcpy(rev,num_string);
    cout<<strrev(rev);
} // Reverse num_string
void concate_to_num_string(int n)
{

        int i=0;
        char ar[100];
         while(n!=0)
         {
             ar[i]=n%10+48;
             n=n/10;
             i++;
         }
         ar[i]='\0';
         strrev(ar);
         cout<<strcat(num_string,ar)<<endl;
}// Convert n to a string then concate it with num_string
void check_palindrome()
{
    if(strcmp(rev,num_string)==0)
    {
        cout<<"\nPlaindrome\n";
    }
    else
    {
        cout<< "\nNot Palindrome\n";
    }


}

// Check if num_string is a palindrome
};
int main()
{

    convert a;

    a.set_num_string("madam");
    a.reverse_num_string();
    a.check_palindrome();

     a.concate_to_num_string(123);
     a.reverse_num_string();
    a.check_palindrome();




   return 0;

}

