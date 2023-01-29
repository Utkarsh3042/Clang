#include<stdio.h>
void main()
//to take 3 int and print largest
{
    int n1,n2,n3,max;
    printf("Enter 3 numbers: \n");
    scanf("%d%d%d",&n1,&n2,&n3);
    max = n1;
    if(n2>max){
        if(n3>n2){
            max=n3;
        }
        else{
            max=n2;
        }
    }
    else if (n3>max)
    {
        if(n2>n3){
            max=n2;
        }
        else{
            max=n3;
        }
        
    }
    printf("Largest : %d",max);
    
}