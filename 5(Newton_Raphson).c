#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (3 * x - cos(x) - 1);
}
float diff(float x)
{
    return (3 + sin(x));
}
int main()
{
    float a,b,x0;
    printf("Enter the values of a and b\n");
    scanf("%f %f",&a,&b);
    if(f(a) * f(b) < 0)
    {
        printf("Root exists\n");
    }
    else
    {
        printf("Invalid...try again\n");
        return 0;
    }
    printf("Enter a random value between a and b:\n");
    scanf("%f",&x0);
    int it = 0;
    float tol,x1;
    printf("Enter tolerance:\n");
    scanf("%f",&tol);
    while(1)
    {
        it++;
        x1 = x0 - (f(x0) / diff(x0));
        if(fabs(f(x1)) <= tol)
        {
            printf("After %d iteration the final answer is %f with f(x1): %f\n",it,x1,f(x1));
            break;
        }
        printf("After %d iteration the value of x is: %f\n",it,x1);
        x0 = x1;
    }
}