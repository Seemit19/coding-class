     *
    **
   ***
  ****
 *****
******


//using for loop with if condition 
#include<stdio.h>
#include<conio.h>
main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
            if(r+c>=6)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}

//using for loop without if conditoin
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
