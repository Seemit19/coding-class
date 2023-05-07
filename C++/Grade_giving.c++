//This program will be giving grade A,B,C,D acording to the marks gained by the student
 
  
   
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks[5];
    int sum = 0;

    // Accept marks for each subject
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    // Calculate percentage
    float percentage = (float)sum / 5;

    // Display the sum and percentage marks
    cout << "Total marks obtained: " << sum << endl;
    cout << "Percentage marks obtained: " << percentage << "%" << endl;

    //Printing grades according to percentage gained
    if(percentage>=90)
    {
        cout<<"A Grade";
    }
    else if(percentage<90&&percentage>=80)
    {
        cout<<"B Grade";
    }
    else if(percentage<80&&percentage>=60)
    {
        cout<<"C Grade";
    }
    else
    {
        cout<<"D Grade";
    }
}
