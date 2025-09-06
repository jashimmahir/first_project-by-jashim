#include<stdio.h>
int main()
{
    FILE *f=fopen("in.txt","r");
    if(f==NULL)
    {
        printf("cannot read");
        return 1;
    }
     int ch;
    ch= fgetc(f);
    printf("%c ",ch+1);
    fseek(f,4,SEEK_CUR);
    
    while((ch=fgetc(f))!=EOF)
    {
        printf("%c ",ch);
    }
    fclose(f);
    return 0;
}