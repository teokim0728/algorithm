#include <stdio.h>

int main()
{
    char a[3][10];
    int i,j;
    for (int i=0; i<3; i++)
        gets(a[i]);
    for (i=0;i<3; i++){
        for (j=0; a[i][j]!='\0'; j++)
            printf("%2c", a[i][j]);
        printf("\n");
    }
    return 0;
}
