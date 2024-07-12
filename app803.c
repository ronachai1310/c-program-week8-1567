#include <stdio.h>
void forLoop();
void main()
{
    int i = 1, count = 12, number;
    printf("Enter a number to generate the table  C: ");
    scanf("%d", &number);
    printf("\nThe multiplication table of %d\n", number);
    printf("\n");
    // printf("------------------------------------\n");
    void forLoop();
    while (i <= count)
    {
        printf("%d x %d =%d\n", number, i, (number * 1));
        i = i + 1;
    }
}

void forLoop()
{
    int j = 1, count2 = 30;
    for (j = 1; j <= count2; j++)
    {
        printf("-");
    }
}