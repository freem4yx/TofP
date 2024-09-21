#include<stdio.h>
#include<math.h>

int main()
{
    int x = 2;
    int y = 0;
    printf("%d ^ %d = %d\n", x, y, (int) pow(x,y));

    printf("Enter the number and base:\n");
    scanf("%d %d", &x, &y);
    printf("log[%d] (%d) = %.1f\n", x, y, log(x) / log(y));

    printf("pi = %f\n", M_PI);
    printf("e = %f\n", exp(1));
    
    return 0;
}