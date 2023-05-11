/*checking and adding even and odd numbers separately */
 
  
  
#include<iostream>
using namespace std;
int main()
{
    int n,i,even=0,odd=0;
    cout<<"Enter the range : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even += i;
        }
        else
        {
            odd += i;
        }
    }
    cout<<"Sum of even number is : "<<even<<endl;
    cout<<"Sum of odd number is : "<<odd<<endl;
}
