#include <stdio.h>


int binarySearch(int arr[], int x, int l, int h)

{

if (h >= l)

{

int m = (l + h) / 2;


if (arr[m] == x)

return m;


if (arr[m] > x)

return binarySearch(arr, x, l, m - 1);

if(arr[m] < x)

return binarySearch(arr, x, m + 1, h);

}

return -1;

}


int main(void)

{

int n;

scanf("%d", &n);

int arr[n];


for (int i = 0; i < n; i++)

{

Shri Vile Parle Kelavani Mandal's INSTITUTE OF TECHNOLOGY DHULE (M.S.) DEPARMENT OF COMPUTER ENGINEERING


Subject :DAA Lab Remark


Name : Bhandarkar Madhur Sachin Roll No. : 35


Class : S.Y.Computer Batch : S3 Division: A


Expt. No. :02 Date : 10/03/2025 Signature


Title : Using Divide and Conquer method write a program for binary

search.



scanf("%d", &arr[i]);

}


int x;

printf("Enter the Element you want to search: ");

scanf("%d", &x);

int result = binarySearch(arr, x, 0, n - 1);

if (result == -1)

printf("Not found\n");

else

printf("Element is found at index %d\n", result);


return 0;

}
