     *
    **
   ***
  ****
 *****
******


//using for loop 
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
