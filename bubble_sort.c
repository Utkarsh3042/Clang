#include<stdio.h>
void main()
//bubble sort
{
    int a[100],n,i,j,temp;
    printf("enter no of elements in array\n");
    scanf("%d",&n);
    printf("enter the values of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    printf("\nThe sorted elemets\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    

}