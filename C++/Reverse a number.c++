#include<iostream>
using namespace std;
int main()
{
    int n , rem , y=0 , h ;
    cout<<"Enter any number : ";
    cin>>n;
    h=n;
    while(n!=0)
    {
        rem=n%10;
        y = y*10+rem;
        n=n/10;
    }
    cout<<"* reverse of "<<h<<" is : "<<y<<"*";
}
