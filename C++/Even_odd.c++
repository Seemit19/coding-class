//This program is to chesk whether the given number is even or not.
 
  
include<iostream>

using namespace std;
main()
{
    int a;
    cout<<"Input a number to check whether it is even or odd : ";
    cin>>a;

    if(a%2==0)
    cout<<a<<" is even";
    else
    cout<<a<<" is odd";
}
