*
**
***
****


//using while loop
#include<stdio.h>
#include<conio.h>
main()
{
    int r=1,c;
    while (r<=4)
    {c=1;
        while(c<=r)
        {
            printf("*");
            c++;
        }
        printf("\n");
        r++;
    }
}
