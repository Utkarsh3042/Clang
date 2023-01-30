#include<stdio.h>
#include<math.h>

//to check a prime number

int isprime(int);

void main()
{
    int n;
    printf("Enter an integer \n");
    scanf("%d",&n);
    if(isprime(n))
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}

int isprime(int n)
{
    int i,rem, flag=1;
    for(i=2;i<=sqrt(n);i++)
    {
        rem = n%i;
        if(rem == 0)
        {
            flag=0;
            break;
        }

    }
    return flag;
}