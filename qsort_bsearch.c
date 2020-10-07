/*This program is to sort the array of elements using the "qsort"
 * and also perform the binary search using the
 * "bsearch" routine which similar to the "qsort"
 * with the additional argument of "key" to be searched...
 */


#include <vxworks.h>
#include <stdio.h>
 #include <stdlib.h>

 #define MAX 5

 int intcmp(const void *v1, const void *v2);

void main(void)
 {
     int arr[MAX], count, key, *ptr,i;

     /* Enter some integers from the user. */

     printf("Enter %d integer values; press Enter after each.\n", MAX);

     for (count = 0; count < MAX; count++)
         scanf("%d", &arr[count]);

//     puts("Press a key to sort the values.");
//     scanf("%d", &i);
     /* Sort the array into ascending order. */

     qsort(arr, MAX, sizeof(arr[0]), intcmp);

     /* Display the sorted array. */

     for (count = 0; count < MAX; count++)
         printf("\narr[%d] = %d.", count, arr[count]);

//     puts("\nPress a key to continue.");
//     scanf("%d", &i);

     /* Enter a search key. */

     printf("Enter a value to search for: ");
     scanf("%d", &key);

     /* Perform the search. */

     ptr = (int *)bsearch(&key, arr, MAX, sizeof(arr[0]),intcmp);

     if ( ptr != NULL )
         printf("%d found at arr[%d].", key, (ptr - arr));
     else
         printf("%d not found.", key);
 }

 int intcmp(const void *v1, const void *v2)
 {
     return (*(int *)v1 - *(int *)v2);
 }
