//date--->12/11/24
//18. Merge two sorted arrays.

#include<stdio.h>

int main(){

int arr1[]={1,2,3,4,5};
int arr2[]={6,7,8,9,10};

int arr3[9];

for (int i=0; i<=4;i++){
     arr3[i]= arr1[i]; 

}
for (int j=0; j<=4;j++){
    arr3[j+5]=arr2[j];
}

for (int i=0; i<=9; i++){
    printf(" %d ", arr3[i]);
}
}