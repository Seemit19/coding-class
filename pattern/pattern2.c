****
***
**
*



/*using if condition*/
#include<stdio.h>
#include<conio.h>
main()
{
    int r,c;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=4;c++)
        {
            if(c<=(5-r))
            printf("*");
        }
        printf("\n");
    }
}

/*without using if condition*/
#include<stdio.h>
#include<conio.h>
main()
{
    int r,c;
    for(r=4;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}
