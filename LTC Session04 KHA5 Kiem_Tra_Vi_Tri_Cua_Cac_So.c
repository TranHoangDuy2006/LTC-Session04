#include <stdio.h>

int main ()
{
    int num1, num2, num3;
    printf("\n");
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num1);

    printf("\n");
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);

    printf("\n");
    printf("Nhap vao so thu ba: ");
    scanf("%d", &num3);

    if (num3 > num1 && num3 < num2 || num3 < num1 && num3 > num2 ) 
    {
        printf("\n");
        printf("So %d nam trong %d va %d!", num3, num1, num2);
    }

        else 
        {
            printf("\n");
            printf("So %d khong nam trong %d va %d!", num3, num1, num2);
        }

    return 0;

}