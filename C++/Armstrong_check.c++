#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n , h, count=0,rem,y=0;
    cout<<"Enter a number to check is it armstrong or not";
    cin>>n;
    h=n;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<"digits in given number : "<<count<<endl;
    n=h;
    while(n!=0)
    {
        rem=n%10;
        y = y+pow(rem,count);
        n=n/10;
    }
    cout<<"calculated number is "<<y<<endl;
    if(y==h)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not armstrong";
    }
}
