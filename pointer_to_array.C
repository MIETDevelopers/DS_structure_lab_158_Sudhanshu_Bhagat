//Author name:Sudhanshu Bhagat
//Creation Date: 25-05-21
//Purpose:
//1. Enter an element in an array
//2. inserting an element in an array
//3. viewing the respective array
#include<stdio.h>  //  Pre-Processive to include standard input and output funtion header files

 void insert(int *b);  // funtion tom  pointer

 int main(){
    int a[6],i; // variable declratation
    printf("Enter the elements of an array\n");
    for ( i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("\nelements of an array entered by user is ");
    for( i=0; i<5; i++){
        printf("\n%d",a[i]);
    }
    insert(a);
    printf("\nelements of array after execution");
    for( i=0; i<6; i++){
        printf("\n%d",a[i]);
    }
    return 0;
 }

void insert(int *b) // funtion calling
{
    printf("\nEnter the element to insert in array\n");
    scanf("%d",(b+6));
}
