#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,sum=0;
    /*Taking an array of name 'sim'*/
    vector<int>sim;
    cout<<"enter the size of an array : ";
    cin>>n;
    cout<<"Enter the elements of an array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sim.push_back(a);
        sum  += sim[i];
    }
    cout<<"Sum of elements of your array is : "<<sum<<endl;
}
