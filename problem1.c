#include<stdio.h>
#include<limits.h>
int main()
{
    FILE *inf,*of;
    int x,sum=0,max=INT_MIN,min=INT_MAX;
    printf("Enter your input file name:");
    char input[100];
    scanf("%s",input);
    inf=fopen(input,"r");
    if(inf==NULL)
    {
        printf("File not succesfully read");
        return 1;
    }
    printf("Enter your output file name:");
    char output[100];
    scanf("%s",output);
    of=fopen(output,"w");
    if(of==NULL)
    {
        printf("could not create output");
        return 1;
    }
    while(fscanf(inf,"%d",&x)==1)
    {
        sum=sum+x;
        if(max<x)
        {
            max=x;
        }
        if(min>x)
        {
            min=x;
        }
    }
    fprintf(of," max is=%d",max);
    fprintf(of," min is=%d",min);
    fprintf(of," sum is=%d",sum);
    fclose(inf);
    fclose(of);
    printf("calculation is completed");
    return 0;
}