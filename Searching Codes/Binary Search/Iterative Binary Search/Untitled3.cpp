#include<stdio.h>
int iterativeBsearch(int A[], int size, int element) {
   int start = 0;
   int end = size-1;
   while(start<=end) {
      int mid = (start+end)/2;
      if( A[mid] == element) {
         return mid;
      } else if( element < A[mid] ) {
         end = mid-1;
      } else {
         start = mid+1;
      }
   }
   return -1;
}
int main()
{
    int n, value, pos,  arr[100];
    printf("Enter the total elements in the array  ");
    scanf("%d", &n);
 
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to search  ");
    scanf("%d", &value);
 
    pos =  iterativeBsearch(arr, n, value);
    printf("%d is found at Index %d \n",value,pos);
    return 0;
}

