#include<stdio.h>
int main()
{
    FILE *x=fopen("xx.txt","r");
    int a,b;
    fscanf(x,"%*[^0-9]  %d %*[^0-9]%d",&a,&b);
    printf("%d",a+b);
    fclose(x);
    return 0;
}