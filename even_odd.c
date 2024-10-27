// 5. Check if a number is even or odd.

#include <stdio.h>
#include <math.h>
int main()
{
    int a;

    //date - 27/10/24

    printf("ENTER 1st NUMBER :- ");
    scanf("%d", &a);
    
    int c= a%2;
    if (c==0){
        printf("THE NUMBER IS EVEN");
    }
    else {printf("THE NUMBER IS ODD");}

    return (0);
}