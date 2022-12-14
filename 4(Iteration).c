#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (cos(x) - 3 * x + 1);
}
float e(float x)
{
    return ((cos(x) + 1) / 3);
}
float diff(float x)
{
    return (-sin(x));
}
int main()
{
    float x0;
    printf("Enter the guessed value:\n");
    scanf("%f",&x0);
    if(fabs(diff(x0)) > 1)
    {
        printf("Invalid input\n");
    }
    else
    {
        int itr = 0;
        float tol,x1;
        printf("Enter tolerance:\n");
        scanf("%f",tol);
        while(1)
        {
            itr++;
            x0 = e(x1);
            if(fabs(f(x1)) < tol)
            {
                printf("After %d iteration the final answer is %f with the f(x1): %f\n",itr,x1,f(x1));
                break;
            }
            printf("After %d iteration the value of x is: %f\n",itr,x1);
            x0 = x1;
        }
    }
}