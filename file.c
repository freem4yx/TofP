#include<stdio.h>
#include<math.h>

int main()
{
<<<<<<< HEAD
    float x;
    float y;
    printf("Enter the number and power:\n");
    scanf("%f %f", &x, &y);
    printf("%.1f ^ %.1f = %.1f\n", x, y, pow(x,y));
    printf("Enter the number and base:\n");
    scanf("%.1f %.1f", &x, &y);
    printf("log[%.1f] (%.1f) = %.1f\n", x, y, log(x) / log(y));

    printf("pi = %f\n", M_PI);
    printf("e = %f\n", exp(1));
    
=======
    int x;
    int y;
    printf("Enter the number and power:\n");
    scanf("%d %d", &x, &y);
    printf("%d ^ %d = %d\n", x, y, (int) pow(x,y));
>>>>>>> 3d92ac8 (Entering of numbers)
    return 0;
}