*
**
***
****


//using while loop

#include<stdio.h>
#include<conio.h>
main()
{
    int i=1,j;
    while(i<=4)
    {j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}
