#include <stdio.h>
#include <stdlib.h>
#define SIZE 11

int main()
{
    for(int i = 1, j = 1; i < SIZE, j < SIZE; i++)
    {
        printf("*");
        if(i % j == 0)
            printf("\n"), i = 0, j++;
    }
    return 0;
}

/*
output:
*
**
***
****
*****
******
*******
********
*********
**********
*/
