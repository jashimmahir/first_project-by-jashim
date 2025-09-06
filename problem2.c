#include<stdio.h>
int main()
{int a,b;
    char ptr[100];
    FILE *x=fopen("inputvalue.txt","w");
    scanf("%d %d",&a,&b);
    
    fprintf(x,"%d %d",a,b);
    int c=a+b;
    printf("the sum:%d",c);
    FILE *r=fopen("outputvalue.txt","w");
    fprintf(r,"the result is = %d",c);
    printf("input yor string:\n");
    fflush(stdin);
    fgets(ptr,10,stdin);
    fprintf(r,ptr);

    fclose(x);
    fclose(r);
    return 0;
}