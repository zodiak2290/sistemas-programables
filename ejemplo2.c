#include <stdio.h>
int main ()
{
int x;
int i,j;
printf("Dame numero\n");
scanf("%d" ,&x);
            for (i=x;i>=0;i--)
            {
                for (j=0;j<i;j++)
                {
                      printf("*");
                 }
                 printf("\n");
            }
return 0;
}
