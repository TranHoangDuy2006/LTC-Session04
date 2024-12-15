#include <stdio.h>

int main() 
{
    int X;
    printf("\n");
    printf("Nhap vao so nguyen X: ");
    scanf("%d", &X);
    
    if ( X % 2 == 0)
    {
        printf("\n");
        printf("So %d la so chan!", X);
    }
            else 
            {
                    printf("\n");
                    printf("S %d la so le!", X);
            }

    return 0;

}