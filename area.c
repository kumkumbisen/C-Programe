#include <stdio.h>
#include <math.h>
int main()
{
    float radius, result;
    int option;
    printf("enter your radius:\n");
    scanf("%f", &radius);
    printf("enter your option:\n");
    printf("option 1:area of a circle:\n");
    printf("option 2: circumference of a circle:\n");
    scanf("%d", &option);

    if (option == 1)
    {
        result = 3.14 * radius * radius;
        printf("area of circle:%f\n", result);
    }
    else
    {
        result = 2 * 3.14 * radius;
        printf("circumference of a circle:%f\n", result);
    }
    return 0;
}
