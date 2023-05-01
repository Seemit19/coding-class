*
**
***
****
*****


//using while loop
#include<stdio.h>
#include<conio.h>
main()
{
    int r=1,c,n;
    printf("input range upto you want the pattern");
    scanf("%d",&n);
    while (r<=n)
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
