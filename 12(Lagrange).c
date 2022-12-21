#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter no. of terms:\n");
    scanf("%d",&n);
    float x[n],y[n],sum = 0, term,xp;
    int i,j;
    printf("Enter values of x:\n");
    for(i = 0; i < n; i ++)
    {
        scanf("%f",&x[i]);
    }
    printf("Enter values of y:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f",&y[i]);
    }
    printf("Enter interpolation point:\n");
    scanf("%f",&xp);
    for(i = 0; i < n; i ++)
    {
        term = 1;
        for(j = 0; j < n; j++)
        {
            if(i != j)
                term = term * ((xp - x[j]) / (x[i] - x[j]));
        }
        sum = sum + term * y[i];
    }
    printf("\nValue at X = %0.2g is = %6.1f",xp,sum);
}