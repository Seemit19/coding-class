#include<iostream>
using namespace std;
int main()
{
    int fact=1,n,i;
    cout<<"Enter the number :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<endl <<"Factorial of "<<n <<" is : "<<fact;
}
