#include <stdio.h>

int main() 
{
    int number;

    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &number);

    if (number > 0) 
	{
        printf("So %d la so duong!\n", number);
    } 
		else if (number < 0) 
		{
        	printf("So %d la so am!\n", number);
    	} 		
				else 
		{
        			printf("So ban nhap la 0, so 0 khong phai so duong cung khong phai so am!\n");
    	}

    return 0;
}

