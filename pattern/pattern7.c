    1
   22
  333
 4444
55555


#include<stdio.h>
#include<conio.h>
main()
{
    int i,r,c,n=5;
    for(i=1;i<=5;i++)
    {
        for(r=1;r<=(n-i);r++)
        {printf(" ");}
        for(c=1;c<=i;c++)
        {printf("%d",i);}
        printf("\n");
    }
}
