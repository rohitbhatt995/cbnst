#include <stdio.h>
#include <math.h>
 
int main()
{
    printf("Shrey Goel B 20011766\n");
    float true,approx;
    printf("Enter the true value and approx value:\n");
    scanf("%f%f",&true,&approx);

    float abs = fabs(true-approx);
    float real = fabs(abs / true);
    float percent = fabs(real * 100);

    printf("Absolute Value: %f\nReal Value: %f\nPercentage Value: %f\n",abs,real,percent);
}