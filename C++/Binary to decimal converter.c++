/* This program will convert binary number to decimal number*/
 
  
   
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long binaryNum;
    int rem , i=0 , decimalNum=0;
    cout<<"Enter a binary number to convert in decimal : ";
    cin>>binaryNum;
    while(binaryNum != 0)
    {
        rem = binaryNum % 10;
        decimalNum += rem * pow(2,i);
        i++;
        binaryNum /= 10;
    }
    cout<<"<-- Decimal equivalent is : "<<decimalNum<<" -->"<<endl;
    return 0 ;
}
