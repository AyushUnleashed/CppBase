#include <stdio.h>

int main ()
{
    int i, j ;
    

    for(i =1; i <= 7; i++)
    {
        for(j =1 ; j <= 7; j++)
        {
            if(i == 1 || j == 1 || i == 7 || j == 7 )
            {
                printf(" 4 ");
            }
            else if (i == 2 || j == 2 || i == 6 || j == 6) {
                printf(" 3 ");
            }
            else if (i == 3 || j == 3 || i == 5 || j == 5)
            {
                printf(" 2 ");
            }
            else if (i == 4 || j == 4)
            {
                printf(" 1 ");
            }

        }

        printf("\n");
    }

}