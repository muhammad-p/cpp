#include <stdio.h>
int main()
{
    FILE *fp = fopen("file1.txt", "r");
    // fprintf(fp, "hello");
    do
    {
        int a = fgetc(fp);
        printf("%d\n", a);
        fp++;
    } while (fp != EOF);
    // char arr[]=fgetword(fp);
    // char az;
    // fscanf(fp,"%c",&az);
    fclose(fp);
   // printf("%d\n", a);
    // printf("%c",az);
    return 0;
}