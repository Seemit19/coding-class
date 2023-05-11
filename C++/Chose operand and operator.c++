/*First input the operand as 'a' and 'b' then chose the operator you want to apply :
 like if you want to add two quantity first input the quantity : 5 9
 then input the funtion : +
 the output wil be 5+9=14 */
 
 
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float d;
    char c;
    cout<<"Enter two numbers on which you want the operation: a & b"<<endl;
    cin>>a>>b;
    cout<<"input the operator"<<endl;
    cin>>c;
    cout<<a<<c<<b<<endl;
    switch (c)
    {case '+':
        d=a+b;
        cout<<"sum is : " <<d;
        break;
     case '-':
        d=a-b;
        cout<<"difference is : "<<d;
        break;
     case '*':
        d=a*b;
        cout<<"product is : "<<d;
        break;
     case '/':
        d=a/b;
        cout<<"quotient is : "<<d;
        break;
     case '%':
        d=a%b;
        cout<<"remainder is : "<<d;
        break;
     default :
     cout<<"invalid selection";
    }
    return 0;
}
