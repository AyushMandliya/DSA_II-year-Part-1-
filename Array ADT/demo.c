#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size; 
    int length;
};
void display(struct Array arr){
    int i;
    printf("Elements are = ");
    for ( i = 0; i < arr.length; i++)
    {
    printf(" %d ",arr.A[i]);
    }
    
}
int main(){
    struct Array arr;
    int n,i;
printf("Enter the value of an array \n");
scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;
    printf("Enter the number of numbers \n");
    scanf("%d",&n);
    printf("Enter all the elements \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr.A[i]);
    arr.length=n;
    display(arr);
return 0;
}