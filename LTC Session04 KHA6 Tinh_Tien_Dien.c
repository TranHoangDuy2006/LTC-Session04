#include <stdio.h>

int main() 
{
    int soDien, startNum, endNum;
    float tienDien = 0;

    // Nhập chỉ số cũ và mới
    printf("Nhap so dien dau thang: ");
    scanf("%d", &startNum);
    printf("Nhap so dien cuoi thang: ");
    scanf("%d", &endNum);

    soDien = endNum - startNum;

    if (soDien < 0) {
        printf("So dien cuoi thang phai lon hon so dien dau thang!\n");
        return 1;
    }

    if (soDien >=0 && soDien < 50) 
    {
        tienDien = soDien * 10000;
    } 
        else if (soDien >= 50 && soDien < 100) 
        {
        tienDien = 50 * 10000 + (soDien - 50) * 15000;
        }   
            else if (soDien >= 100 && soDien < 150) 
            {
                tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
            } 
                    else if (soDien >= 150 && soDien < 200) 
                    {
                        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
                    } 
                            else 
                            {
                                tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;
                            }

                printf("Tien dien tieu thu trong thang la: %.0f VND\n", tienDien);

    return 0;
}
