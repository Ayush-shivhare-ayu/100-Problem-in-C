//3. Find the maximum of three numbers. //

#include<stdio.h>

int main ()
{
int a,b,c;
  
  printf("ENTER FIRST NUMBER :- ");
  scanf("%d",&a);

  printf("ENTER SECOND NUMBER :- ");
  scanf("%d",&b );

  printf("ENTER THIRD NUMBER :- ");
  scanf("%d",&c);

  if(a>b>=c) {
printf("%d is the greatest number", &a);
  
  }
  else if (b>a>=c) {
    printf("%d is the greatest number", &b);
  }
  else if (c>b>=a) { 
    printf("%d is the greatest number", &c);
  }

  reutrn 0;

  
}
