        *
      * *
    *   *
  *     *
* * * * *


#include<stdio.h>
#include<conio.h>
void main()
{
    int  r,c,n;
    printf("input the range upto you want pattern\n");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r==n||c==n||r+c==n+1)
            {printf("* ");}
            else
            printf("  ");
        }
        printf("\n");
    }
}

//thanks for seeing my code. feel free to comment.  
