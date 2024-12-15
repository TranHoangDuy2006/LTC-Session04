#include <stdio.h>

int main() 
{
    int S;
    printf("Nhap vao so nguyen S:\n ");
    scanf("%d", &S);

    if ( S % 3 == 0 && S % 5 == 0 ) 
    {
        printf("So %d chia het cho ca 3 va 5!\n", S);
    }
        else if ( S % 3 == 0 ) 
        {
            printf("So %d chi chia het cho 3, khong chia het cho 5!\n", S);
        }
        
        else if ( S % 5 == 0 ) 
        {
            printf("So %d chi chia het cho 5, khong chia het cho 3!\n", S);
        }
            else 
            {
                printf("So %d khong chia het cho 3 va khong chia het cho 5!\n", S);
            }
    return 0;
}