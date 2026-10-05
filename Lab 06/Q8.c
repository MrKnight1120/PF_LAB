#include <stdio.h>
int main(){

    int arr[9], n = 8;
    int i, max, min, key, found = -1;
    int pos, value;

    printf("Enter 8 integers: ");

    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    printf("Original array: ");

    for (i = 0; i < n; i++)
      printf("%d ", arr[i]);
   printf("\n");

    max = arr[0];
    min = arr[0];

 for (i = 1; i < n; i++){

   if (arr[i] > max)
        max = arr[i];
   if (arr[i] < min)
        min = arr[i];
 }
 printf("Largest = %d\nSmallest = %d\n", max, min);
 printf("Enter search value: ");
 scanf("%d", &key);

 for (i = 0; i < n; i++){

    if (arr[i] == key){

        found = i;
        break;
 }
 }
 if (found == -1)
 printf("Not found\n");
 else
 printf("Found at index %d\n", found);
 printf("Enter insertion index and value: ");
 scanf("%d %d", &pos, &value);
if (pos < 0 || pos > n){
 printf("Invalid insertion index\n");
 return 0;
 }

 for (i = n; i > pos; i--)
 arr[i] = arr[i - 1];
 arr[pos] = value;

 n++;

 printf("After insertion: ");

 for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\n");
    printf("Enter deletion index: ");
    scanf("%d", &pos);

 if (pos < 0 || pos >= n){
 printf("Invalid deletion index\n");
 return 0;
 }

 for (i = pos; i < n - 1; i++)
 arr[i] = arr[i + 1];
 n--;

 printf("Final array: ");

 for (i = 0; i < n; i++)
 printf("%d ", arr[i]);
 printf("\n");

 
 return 0;
}