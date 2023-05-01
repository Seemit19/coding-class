*****
****
***
**
*


//using while loop
#include<stdio.h>
#include<conio.h>
main()
{
    int r,c,n;
    printf("input range upto you want the pattern\n");
    scanf("%d",&n);
    r=n;
    while(r!=0)
    {c=1;
        while(c<=r)
        {
            printf("*");
            c++;
        }
        printf("\n");
        r--;
    }
}
