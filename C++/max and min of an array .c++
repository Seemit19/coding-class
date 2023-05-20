#include<iostream>
#include<vector>
int main()
{
    int max , min , n , i , a;
    std::vector<int>sim;
    std::cout<<"Enter size of an array : ";
    std::cin>>n;
    std::cout<<"Enter the elements of an array :"<<std::endl;
    for(i=0;i<n;i++)
    {
        std::cout<<"Element "<<i <<": ";
        std::cin>>a;
        sim.push_back(a);
    }
    max=sim[0];
    min=sim[0];
    for(i=0;i<n;i++)
    {
        if(max<sim[i])
        {
            max=sim[i];
        }
        else if(min>sim[i])
        {
            min=sim[i];
        }
    }
    std::cout<<"Maximum element is : "<<max <<std::endl <<"Minimum element is : "<<min;
    return 0;
}
