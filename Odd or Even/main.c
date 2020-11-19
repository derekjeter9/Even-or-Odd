#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number to check if it's even or odd-");
    scanf("%d", &number);

    if ((number % 2) == 0) {
        printf("%d is an even number", number);
    }
    else
    {
        printf("%d is an odd number");
    }
}
