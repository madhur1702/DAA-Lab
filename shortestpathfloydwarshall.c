#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int adjacancy[10][10], D[10][10], i, j, k, n, value;

    printf("No of nodes present in graph: "); // Take input of nodes
    scanf("%d", &n);
    printf("Enter the adjancency matrix:\n");
    printf("NOTE: if there is infinity value in matrix enter 9999 value\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &adjacancy[i][j]); // To scan the adjancy matrix
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {

            printf("%d\t", adjacancy[i][j]); // To print the adjancy matrix
        }
        printf("\n");
    }
    printf("*******************\n");

    for (i = 1; i <= n; i++) // For copy elements of matrix
    {
        for (j = 1; j <= n; j++)
        {

            D[i][j] = adjacancy[i][j];
        }
    }
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                value = D[i][k] + D[k][j]; // For finding the minimum values
                if (D[i][j] > value)
                {
                    D[i][j] = value; // The value is assigned to the distance
                }
            }
        }
        for (i = 1; i <= n; i++) // For printing solution
        {
            for (j = 1; j <= n; j++)
            {
                if (D[i][j] == 999)
                    printf("%s \t", "INF");
                else
                    printf("%d \t", D[i][j]);
            }
            printf("\n\n");
        }
        printf("\n\n");
    }
printf("\n\n THE LAST MATRIX RETURNS THE ALL PAIRS SHORTEST PATH !!"); 
printf("\n\n");
return 0;
}