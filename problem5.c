#include<stdio.h>
int main()
{
    FILE *img=fopen("img01.jpg","rb");
    if(img==NULL)
    {
        printf("can not read the img01 file");
        fclose(img);
        return 1;
    }
    FILE *c=fopen("copy_imgo1.jpg","wb");
    if (c == NULL) {
        printf("Cannot create copy_img01.jpg file\n");
        fclose(img);
        return 1;
    }
    while(1)
    {
       int ch=fgetc(img); 
       if(ch==EOF)
       {
        break;
       }
       fputc(ch,c);
    }
    fclose(img);
    fclose(c);
    printf("File copy successfully");
    return 0;
    
}