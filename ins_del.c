#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int arr[10] = {1, 4, 6, 9, 5, 3}, size = 6, capacity = 10, num = 10, x = 3;

    /*
    //insertion at first index
    size += 1;

    for (int i = size - 1; i > 0; i--) {
         arr[i] = arr[i-1];
    }

    arr[0] = num;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    */

    /*
    // insertion from last index

    size += 1;
    arr[size-1] = num;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    */

    /*
    // insertion at position x

    size += 1;

    for (int i = size - 1; i > x; i--) {
         arr[i] = arr[i-1];
    }

    arr[x] = num;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    */

    /*
    // deleting from starting position

    for (int i = 0; i <= size-2; i++) {
        arr[i] = arr [i+1];
    }

    size -= 1;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    */

    /*
    //deleting from last position

    size -= 1;

    for (int i = 0; i < size; i++) {
        printf ("%d ", arr [i]);
    }

    */

    /*

    // deleting from position x

    for (int i = x; i < size - 1; i++) {
        arr[i] = arr [i + 1];
    }
    size -= 1;

    for (int i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }

    */

    return 0;
}
