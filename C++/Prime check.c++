#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cout<<"Enter any number : ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"* "<<n<<" is a prime number"<<" *";
    else
    cout<<"* "<<n<<" is not a prime number"<<" *";
}
