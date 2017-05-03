#include <stdio.h>

int main()
{
   int c, left, right, middle, size, key;


   printf("Enter number of elements\n");
   scanf("%d",&size);
   int array[size];
   left =0;
   right = size - 1;
   middle = (left+right)/2;

   printf("Enter %d integers\n", size);
   for (c = 0; c < size; c++)
      scanf("%d",&array[c]);

   printf("Enter value to find\n");
   scanf("%d", &key);



   while (left <= right) {
      if (array[middle] < key)
         left = middle + 1;
      else if (array[middle] == key) {
         printf("Item found at location %d \n", middle);
         break;
      }
      else
         right = middle - 1;

      middle = (left + right)/2;
   }
   if (left > right)
      printf("Item Not found! %d ", key);

   return 0;
}
