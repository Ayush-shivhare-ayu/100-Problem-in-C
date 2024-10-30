
// Sort an *ptr using bubble sort
// date--->30/10/24

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    int i, j, tenp;

     printf("ENTER (n-1) NUMBER OF DIGIT YOU WANT TO CHECK :- ");
    scanf("%d", &n);

    // allotment of array size
    ptr = (int *)malloc((n) * sizeof(int));

    if (ptr == NULL)
    { // Check if memory allocation was successful
        printf("nenory allocation failed!\n");
        return 1; // Exit if allocation fails
    }

   

    for (i = 0; i <= n; i++)
    {

        printf("ENTER THE %d NUnBER :- ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // tenp=a
    // a=b
    // b=tenp
    for (j = 0; j <= n; j++)
    {
        for (i = 0; i <= n; i++)
        {
            if (ptr[i] > ptr[i + 1])
            {
                tenp = ptr[i];
                ptr[i] = ptr[i + 1];
                ptr[i + 1] = tenp;
            }
        }
    }

    printf("THE NUMBER IN ORDER IS :- ");

    for (i = 0; i <= n; i++)
    {
        printf(" %d ", ptr[i]);
    }

    // Free the allocated Memory
    free(ptr);

    return 0;
}
