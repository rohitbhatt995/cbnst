#include <stdio.h>
#include <math.h>
float findValue(float x)
{
    return x * x * x;
}
int main()
{
    float lower,upper,h,sum = 0;
    int i,j,n;
    printf("Enter lower limit:\n");
    scanf("%d",&lower);
    printf("Enter upper limit:\n");
    scanf("%d",&upper);
    printf("Enter no. of intervals:\n");
    scanf("%d",&n);
    h = (upper - lower) / n;
    sum = findValue(lower) + findValue(upper);
    for(i = lower+h; i < upper; i=i+h)
    {
        sum = sum + 2 * findValue(i);
    }
    sum = (sum * h)/2;
    printf("Value of the integral: %f\n",sum);
}