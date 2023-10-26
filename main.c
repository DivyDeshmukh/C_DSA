#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int arr[10] = {1, 2, 3, 4, 5}, size = 5, capacity = 10, num = 10, pos = 2, i;


    /*
    // Inserting at first position
    size += 1;
    for (i = size - 1; i > 0; i--) {
        arr [i] = arr [i-1];
    }

    arr[0] = 0;

    for (i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }
    */

    /*
    // Inserting at last position

    size += 1;
    arr [size-1] = 6;

    for (i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }
    */

    /*
    // Inserting at given position

     size += 1;
    for (i = size - 1; i > pos; i--) {
        arr [i] = arr [i-1];
    }

    arr [pos] = 4.5;
    for (i = 0; i < size; i++) {
        printf ("%d ", arr[i]);
    }
    */

    /*
    // Deleting from first position

    for (i = 0; i < size - 1; i++) {
        arr [i] = arr [i + 1];
    }

    size -= 1;

    for (i = 0; i < size; i++) {
        printf ("%d ", arr [i]);
    }
    */

    /*
    // Deleting from last position
    size -= 1;
    for (i = 0; i < size; i++) {
        printf ("%d ", arr [i]);
    }
    */

    /*
    // Deleting from the given position


    for (i = pos; i < size - 1; i++) {
        arr [i] = arr [i + 1];
    }

    size -= 1;

    for (i = 0; i < size; i++) {
        printf ("%d ", arr [i]);
    }
    */

    return 0;
}
