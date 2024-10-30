//16. Find the largest element in an array.
//date---> 30/10/24

#include <stdio.h>

int main()
{
    int array[5];
    int i, j, temp;

    for (i = 0; i <= 4; i++)
    {
        printf("ENTER THE %d NUMBER :- ", i+1);
        scanf("%d", &array[i]);
    }

    // temp=a
    // a=b
    // b=temp
    for (j = 0; j <= 4; j++)
    {
        for (i = 0; i <= 4; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    printf("THE NUMBER IN ORDER IS %d ", array[4]);

    

    return 0;
}

