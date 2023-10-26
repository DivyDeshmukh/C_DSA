#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7}, size = 5, num = 5, i;

    /*
    // Iterative Algorithm for Linear Search

    for (i = 0; i < size; i++) {
        if (arr [i] == num) {
            printf ("%d present at %d\n", num, i);
            break;
        }
    }
    */

    /*
    // Recursive Algorithm for Linear Search

    int k = linearSearch (arr, size, num);

    if (k == -1) {
        printf ("%d is not present in the array\n", num);
    }else
    {
        printf ("%d is present at index %d\n", num, k);
    }
    */

    /*
    // Iterative Algorithm for Binary Search

   int k = IterativeBinarySearch (arr, 0, size-1, num);

   if (k != -1) {
    printf ("%d found at index %d\n", num, k);
   }else
   {
       printf("%d is not present in the array\n", num);
   }
   */

   /*
   // Recursive Binary Search
   int k = binarySearch (arr, 0, size-1, num);

   if (k >= 0) {
    printf ("%d found at index %d\n", num, k);
   }else
   {
       printf("%d is not present in the array\n", num);
   }
   */

    return 0;
}

/*
// Recursive LinearSearch
int linearSearch (int a[], int n, int number)
{
    int i = n - 1;

    if (a[i] == number) {
        return i;
    }else
    {
        return linearSearch (a, n - 1, number);
    }

    return -1;
}
*/

/*
int IterativeBinarySearch (int ar[], int low, int high, int n) {

    while (low <= high) {
        int mid = (low + high) / 2;

        if (ar[mid] == n) {
            return mid;
        }else
        {
            if (ar[mid] < n) {
                low = mid + 1;
            }else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}
*/

/*
// Recursive BinarySearch
int binarySearch (int ar[], int low, int high, int number) {


    if (low <= high)
    {
        int mid = (low + high) / 2;

        if (ar[mid] == number) {
            return mid;
        }

        if (ar[mid] < number) {
            low = mid + 1;
            return binarySearch (ar, low, high, number);
        }else
        {
            high = mid - 1;
            return binarySearch (ar, low, high, number);
        }
    }

    return -1;

}
*/

