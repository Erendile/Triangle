#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 1, j = 1; i < 11, j < 11; i++)
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
