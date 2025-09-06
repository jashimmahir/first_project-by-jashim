#include<stdio.h>
int main()
{
    FILE *im=fopen("img01.jpg","rb");
    if(im==NULL)
    {
        printf("can not read");
        return 1;
    }
    int x=fseek(im,0,SEEK_END);
    if(x!=0)
    {
        printf("can not fseek work");
        return 1;
    }
    long long int c= (ftell(im))/1024.0;
    printf("%lld mb",c);
    printf("I am jashim mahir");
    fclose(im);
    return 0;


}