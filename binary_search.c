#include<stdio.h>
#include<string.h>
//binary search

void main()
{
    int a[10],key,n,i,low,high,mid,found=0;
    printf("Enter the no. of elements to read\nn= ");
    scanf("%d",&n);
    printf("Enter the elements in ascending order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key to search:\n");
    scanf("%d",&key);
    low = 0;
    high = n-1;
    while(low<=high && !found)
    {
        mid = (low+high)/2;
        if(a[mid]==key)
        {
            found=1;
        }
        else if(a[mid]<key){
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }

    }
    if(found==1)
    {
        printf("Key found in position: %d",mid+1);
    }
    else
    {
        printf("Key not found");
    }
}