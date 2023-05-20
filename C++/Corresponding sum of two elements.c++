#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b;
    vector<int>q,w,e;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of first array"<<endl;
    for(i=0;i<n;++i)
    {
        cout<<"Element "<<i <<": ";
        cin>>a;
        q.push_back(a);
    }
    cout<<"Enter the elements of second array"<<endl;
    for(i=0;i<n;++i)
    {
        cout<<"Element "<<i <<": ";
        cin>>a;
        w.push_back(a);
    }
    for(i=0;i<n;++i)
    {
        b=q[i]+w[i];
        e.push_back(b);
    }
    cout<<"Sum of corresponding elemets of two array is : ";
    for(i=0;i<n;++i)
    {
        cout<<e[i]<<" ";
    }
    cout<<endl;
    return 0;
}
