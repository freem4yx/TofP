#include<stdio.h>

int main()
{
    printf("Enter two numbers, please:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("(%d + %d) mod 5 = %d\n", a, b, (a + b) % 5);
    return 0;
}
