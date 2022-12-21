#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the no of unknown matrix\n");
    scanf("%d",&n);
    float arr[n][n + 1];
    int i,j;
    printf("Enter the values in matrix:\n");
    for(i = 0; i < n; i ++)
    {
        for(j = 0; j < n + 1; j ++)
        {
            scanf("%f",&arr[i][j]);
        }
    }
    // convert argumented matrix into Upper Triangular Matrix
    for(i = 0; i < n; i ++)
    {
        for(j = 0; j < n + 1; j ++)
        {
            if(j < i)
            {
                float ratio = arr[i][j] / arr[j][j];
                for(int k = 0; k < n + 1; k ++)
                {
                    arr[i][k] = arr[i][k] - ratio * (arr[j][k]);
                }
            }
        }
    }
    printf("Upper Triangular Matrix:\n");
    for(i = 0; i < n; i ++)
    {
        for(j = 0; j < n + 1; j ++)
        {
            printf("%0.2f\t",arr[i][j]);
        }
        printf("\n");
    }

    // Backward Substitution
    float x[n];
    x[n - 1] = arr[n - 1][n] / arr[n - 1][n - 1];
    for(i = n - 1; i >= 0; i --)
    {
        float sum = 0;
        for(j = i + 1; j < n; j++)
        {
            sum = sum + arr[i][j] * x[j];
        }
        x[i] = (arr[i][n] - sum) / arr[i][i];
    }

    printf("Result\n");
    for(i = 0; i < n; i ++)
    {
        printf("The value of %d is: %.2f\n",i,x[i]);
    }
    return 0;
}