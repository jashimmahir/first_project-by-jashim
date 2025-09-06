#include<stdio.h>
int main()
{
    FILE *a=fopen("inputvalue.txt","r");
    if(a==NULL)
    {
        printf("read can not succes.");
        return 1;
    }
    int x,y;
    if(fscanf(a,"%d %d",&x,&y)!=2)
    {
        printf("read not succes");
        return 1;
    }
    printf("%d",x+y);
    fclose(a);
    return 0;


}