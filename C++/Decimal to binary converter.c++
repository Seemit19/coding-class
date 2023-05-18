/*This program will take a decimal number(no fraction) and will convert in binary number*/
 
  
  
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long binaryNum = 0;
    int rem , i=1 , decimalNum;
    cout<<endl<<"Enter a decimal number to convert in binary : ";
    cin>>decimalNum;
    while(decimalNum!=0)
    {
        rem = decimalNum % 2;
        binaryNum += rem*i;
        i *= 10;
        decimalNum /= 2;
    }
    cout<<"<--Binary equivalent is : "<<binaryNum <<"-->"<<endl;
    return 0 ;
}
