*
**
***
****




#include<stdio.h>
#include<conio.h>
main()
{
    int r,c;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=4;c++)
        if(c<=r)
        {
            printf("*");
        }
        printf("\n");
    }
}
