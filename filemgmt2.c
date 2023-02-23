#include<stdio.h>
void main()
//fpn==file pointer name
//this is to open a file and read its content
{
    FILE *fpn;
    char file[100];
    fpn = fopen("hello.txt","r");
    if(fpn==NULL){
        printf("no file found");
    }
    while(fgets(file,100,fpn)!=NULL) //fgets is used to read string from file
    //it will read 100 characters during each iteration and print them on screen
    {
        printf("%s",file);
    }
    fclose(fpn);
}