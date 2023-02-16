#include<stdio.h>
#include<math.h>

//using pointers to compute sum,mean, standard deviation of an array

void main(){
    float a[10],*ptr,mean,std,sum=0,sumstd=0;
    int i,n;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++){
        sum+=ptr[i];
    }
    mean = sum/n;
    for(i=0;i<n;i++){
        sumstd+=pow((ptr[i]-mean),2);
    }
    std=sqrt(sumstd/n);
    printf("sum = %.3f\n",sum);
    printf("mean = %.3f\n",mean);
    printf("standard deviation = %.3f\n",std);
}
