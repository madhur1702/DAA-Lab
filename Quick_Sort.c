#include <stdio.h>

#include <stdlib.h>

int count;

void quicksort(int number[], int first, int last)

{

int i, j, pivot, temp;

if (first < last)

{

pivot = first;

i = first;

j = last;

while (i < j)

{

while (number[i] <= number[pivot] && i < last)

{

i++;

}

while (number[j] > number[pivot])

{

j--;

}


if (i < j)

{

temp = number[i];

number[i] = number[j];

number[j] = temp;

Shri Vile Parle Kelavani Mandal's INSTITUTE OF TECHNOLOGY DHULE (M.S.) DEPARMENT OF COMPUTER ENGINEERING


Subject: DAA Lab Remark


Name : Bhandarkar Madhur Sachin Roll No. : 35


Class : S.Y.Computer Batch : S3 Division: A


Expt. No. :01 Date : 05/03/2025 Signature


Title : Using Divide and conquer method write a program to sort the list

using quick sort.



}

}

temp = number[pivot];

number[pivot] = number[j];

number[j] = temp;

for(int i=0;i<count;i++)

{


printf("%d ",number[i]);

}

printf("\n");

quicksort(number, first, j - 1);

quicksort(number, j + 1, last);

}

}


int main()

{

scanf("%d", &count);

int arr[count];


for (int i = 0; i < count; i++)

{

scanf("%d", &arr[i]);

}


printf("Before sorting: ");

for (int i = 0; i < count; i++)

{

printf("%d ", arr[i]);

}

printf("\n");


quicksort(arr, 0, count - 1);


printf("After sorting: ");

for (int i = 0; i < count; i++)

{

printf("%d ", arr[i]);

}

printf("\n");


return 0;

}
