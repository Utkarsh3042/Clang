#include<stdio.h>

float area_rect(float,float);
float area_circle(float);
float area_tri(float,float);

float area_tri(float b, float h)
{
    float area;
    area = .5*h*b;
    printf("%.3f area square",area);
}

float area_rect(float l,float b)
{
    float area;
    area = l*b;
    printf("%.3f area square",area);

}

float area_circle(float r)
{
    float area;
    area = 3.142*r*r;
    printf("%.3f area square",area);
}

void main()
{
    int n;
    printf("Enter the number which area to find: \n1. Triangle \n2. Rectangle \n3. Circle\n=>");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
        {
            float h,b;
            printf("Enter Height and Base:\n:");
            scanf("%f%f",&h,&b);
            area_tri(b,h);
            break;
        }
        case 2:
        {
            float l,b;
            printf("Enter Length and Breadth:\n");
            scanf("%f%f",&l,&b);
            area_rect(l,b);
            break;
        }
        case 3:
        {
            float r;
            printf("Enter Radius:\n");
            scanf("%f",&r);
            area_circle(r);
            break;
        }
        default:
        {
            printf("Wrong option try again\n");
            break;
        }
    }
}