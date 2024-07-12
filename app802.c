#include <stdio.h>
void forloop();
void main()
{
    int number, i;
    printf("Enter a number to generate the teblein C : ");
    scanf("%d",&number);

    printf("\nThe multiplication table of %d\n", number);
    forloop();
    printf("\n");
    //prntf("*********************************\n")
    for(int i = 1; i <= 12; i = i + 1)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

void forloop(){
    int i = 1, count = 30;
    for (i = 1; i <= count; i++)
    {
        printf("*");
    }
}