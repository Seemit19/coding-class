    *
   **
  ***
 ****
*****


//using for loop 
//using if condition 
#include<stdio.h>
#include<conio.h>
main()
{
    int r,c,n;
    printf("inut the range upto you want the pattern");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r+c>=(n+1))
            {printf("*");}
            else
            {printf(" ");}
        }
        printf("\n");
    }
}

//without using if condition
#include<stdio.h>
#include<conio.h>
main()
{
    int i,r,c,n;
    printf("input the range upto you want pattern\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(r=1;r<=(n-i);r++)
        {printf(" ");}
        for(c=1;c<=i;c++)
        {printf("*");}
        printf("\n");
    }
}
