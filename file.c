#include<stdio.h>
#include<math.h>

int main()
{

    float x;
    float y;
    printf("Enter the number and power:\n");
    scanf("%f %f", &x, &y);
    printf("%f ^ %f = %.4f\n", x, y, pow(x,y));
    printf("Enter the number and base:\n");
    scanf("%.1f %.1f", &x, &y);
    printf("log[%.1f] (%.1f) = %.1f\n", x, y, log(x) / log(y));

    printf("pi = %f\n", M_PI);
    printf("e = %f\n", exp(1));
    
    printf("Enter R:\n");
    float radius;
    scanf("%f", &radius);
    printf("R = %f, S = %.4f", radius, radius * radius * M_PI);
    return 0;
}