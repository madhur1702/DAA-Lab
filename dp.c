#include <stdio.h>
void knapSack(int W, int n, int val[], int wt[]);
int getMax(int x, int y);
int main(void)
{
    // the first element is set to -1 as
    // we are storing item from index 1
    // in val[] and wt[] array
    int val[] = {-1, 100, 20, 60, 40}; // value of the items
    int wt[] = {-1, 3, 2, 4, 1};       // weight of the items

    int n = 4; // total items
    int W = 5; // capacity of knapsack
    knapSack(W, n, val, wt);
    return 0;
}
int getMax(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

void knapSack(int Capacity, int n, int val[], int objwt[])
{
    int i, weight;
    // value table having n+1 rows and W+1 columns
    int V[n + 1][Capacity + 1];
    // fill the row i=0 with value 0
    for (weight = 0; weight <= Capacity; weight++)
    {
        V[0][weight] = 0;
    }
    // fille the column w=0 with value 0
    for (i = 0; i <= n; i++)
    {
        V[i][0] = 0;
    }
    // fill the value table
    for (i = 1; i <= n; i++)
    {
        for (weight = 1; weight <= Capacity; weight++)
        {
            if (objwt[i] <= weight)
            {
                V[i][weight] = getMax(V[i - 1][weight], val[i] + V[i - 1][weight - objwt[i]]);
            }
            else
            {
                V[i][weight] = V[i - 1][weight];
            }
        }
    }
    // max value that can be put inside the knapsack
    printf("Max Value: %d\n", V[n][Capacity]);
}