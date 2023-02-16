#include<stdio.h>

//simple program to get the largest & smallest int in an array

int largest(int arr[],int n);
int smallest(int arr[], int n);

void main()
{
    int arr[100],n,i,large,small;
    printf("enter no. of elements in array:\n");
    scanf("%d",&n);
    printf("enter values in array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);    
    }
    large = largest(arr,n);
    small = smallest(arr,n);
    printf("Largest = %d\n",large);
    printf("Smallest = %d\n",small);

    
}

int largest(int arr[],int n){
    int large,i;
    large = arr[0];
    for(i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    return large;
}

int smallest(int arr[],int n){
    int large,i;
    large = arr[0];
    for(i=0;i<n;i++){
        if(large>arr[i]){
            large=arr[i];
        }
    }
    return large;
}