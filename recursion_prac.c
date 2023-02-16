#include<stdio.h>
int convertB_D(int num);
int iter=0, count=1;

//to convert binary to decimal using recursion

void main()
{
    int N,D;
    printf("Enter the no. in binary \n");
    scanf("%d",&N);
    D = convertB_D(N);
    printf("decimal= %d \n",D);
}

int convertB_D(int num)
{
    iter++;
    if(iter!=1){
        count*=2;
    }
    if((num/10)==0){
        return(num*count);
    }
    return((num%10)*count + convertB_D(num/10));
}