#include <stdio.h>
 
int main()
{
    int i, k;
 
    for (i = 2; i <= 9; i++)
        printf(" #제%d단#", i); // 맨 위에 단의 제목을 출력한다.
 
    printf("\n\n"); // 두 줄을 띄운다.
 
    for (i = 1; i <= 9; i++)
    {
        for (k = 2; k <= 9; k++)
        {
            printf("%2dX%2d=%2d", k, i, k*i);
        }
        printf("\n");
    }
}