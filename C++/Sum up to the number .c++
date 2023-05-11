#include<iostream>
using namespace std;
int main()
{
    long n,i;
    int sum=0;
    cout<<"Enter the range upto you want the sum : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    cout<<"Sum is :"<<sum;
}
