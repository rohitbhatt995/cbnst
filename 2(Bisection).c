#include <stdio.h>
#include <math.h>
float f(float x)
{
    return (x * x * x - 5 * x + 1);
}
int main()
{
    printf("Shrey Goel B 20011766\n");
    float a,b;
    printf("Enter the initial roots\n");
    scanf("%f %f",&a,&b);
    if(f(a) * f(b) < 0)
    {
        printf("Range is correct!!\n");
        float allow_error;
        printf("Enter the allow error\n");
        scanf("%f",&allow_error);
        float x = (a + b) / 2;
        while(fabs(f(x)) > allow_error)
        {
            if(f(a) * f(x) < 0)
                b = x;
            else if(f(x) * f(b) < 0)
                a = x;
            x = (a + b) / 2;
            printf("x = %f f(x) = %f\n",fabs(x),f(x));
        }
        printf("The root of the equation is: %f and f(x) = %f\n",fabs(x),f(x));
       
    }
    else
    {
        printf("Range is Incorrect\n");
    }
    return 0;
}