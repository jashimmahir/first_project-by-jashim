#include<stdio.h>
int main()
{
    FILE *m=fopen("math.txt","r");
    if(m==NULL)
    {
        printf("math.txt file can not read");
        return 1;
    }
    FILE *b=fopen("bangla.txt","r");
    if(b==NULL)
    {
        printf("bangla.txt file can not read");
        return 1;
    }
    FILE *e=fopen("english.txt","r");
    if(e==NULL)
    {
        printf("english.txt file can not read");
        return 1;
    }
    int i=0,mid[100],mmark[100];
    while(fscanf(m,"%d %d",&mid[i],&mmark[i])==2)
    {
        //printf("ID: %d, MARK: %d\n",id[i],mark[i]);
        i++;
    }
    int j=0,eid[100],emark[100];
    while(fscanf(e,"%d %d",&eid[j],&emark[j])==2)
    {
        //printf("ID: %d, MARK: %d\n",id[i],mark[i]);
        j++;
    }
    int k=0,bid[100],bmark[100];
    while(fscanf(b,"%d %d",&bid[k],&bmark[k])==2)
    {
        //printf("ID: %d, MARK: %d\n",id[i],mark[i]);
        k++;
    }
    FILE *s=fopen("storeresult.txt","w");
    double sum[100];
    for(int i=0;i<10;i++)
    {
       sum[i]=(mmark[i]+emark[i]+bmark[i])/3.0;
    }
    for(int i=0;i<10;i++)
    fprintf(s,"ID: %d ,Mark: %lf\n",bid[i],sum[i]);
    fclose(m);
    fclose(b);
    fclose(e);
    fclose(s);
    printf("succesfuly done");
    return 0;

}