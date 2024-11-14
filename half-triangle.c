#include <stdio.h>
int main()
{
    int i;
    int j;

    for(i=1;i<=6;i++)  //For rows//
    {

        for(j=1;j<=i;j++)  //For Columns//
        {
            printf("* ");
        }

        printf("\n");

    }


    return 0;
}
