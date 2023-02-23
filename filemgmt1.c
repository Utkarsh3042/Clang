#include<stdio.h>
void main()
//fpn==file pointer name
//this is to open and close a file
{
    FILE *fpn;
    char file[100];
    fpn = fopen("hello.txt","r"); //to open a file name hello.txt     r=read mode only
    if(fpn==NULL){
        printf("no file found");
    }
    fclose(fpn); //to close the file
}