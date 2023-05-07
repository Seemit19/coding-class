//This program will tell , is the given year leap or not.
 
  
#include<iostream>

using namespace std;
main()
{
    int year;
    cout<<"Input a year to check if it is leap year or not : ";
    cin>>year;
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        cout<<year<<" is the leap year";
    }
    else
    {
        cout<<year<<" is not a leap year";
    }
}
