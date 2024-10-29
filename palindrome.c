//how to check for  palindrome. 
// reverse is same as original. example - 1221, racecar,54245 etc
//date--->29/10/24

#include <stdio.h>

int main(){

     int a, rem, q, result=0;

     printf("enter the number :-");
     scanf("%d", &a);

     q=a;
     while(q != 0)
     {
        rem =q%10;
        result=result*10+ rem;
        q=q/10;
     }

     if (result==a){
        printf("THE NUMBER IS PALINDROME");
     }

     else{
        printf("THE NUMBER IS NOT PALINDROME");
     }



     return (0);

}