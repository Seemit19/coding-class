/*Fibonacci is series which starts from 0 and next term is 1 and then sum of past consecutive two terms is next term:
 i.e 0,1,2,3.....
 the 2 is found by adding the two numbers before it (1+1),
 the 3 is found by adding the two numbers before it (1+2),
 and so on...
*/
 
 
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,i,n;
    cout<<"Input the range up to you want series : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i<n)
        cout<<a<<",";
        else
        cout<<a;
        c=a+b;
        a=b;
        b=c;
    }
}
