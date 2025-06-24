#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of elements in fibonacci series: ");
    scanf("%d", &n);
    int a = 0, b = 1;
    if (n <= 0)
    {
        return 0;
    }
    printf("Printing Fibonacci series of %d numbers is: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", b);
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}