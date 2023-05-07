//Swapping two numbers using third variable
 
 
 
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number that is a=";
    cin>>a;
    cout<<"Enter second number that is b=";
    cin>>b;
    cout<<endl;
    cout<<endl;

    c=a;
    a=b;
    b=c;
    
    cout<<"Swapped number : "<<endl <<"a=" <<a <<"  and " <<" b=" << b <<endl;
    return 0;
}
