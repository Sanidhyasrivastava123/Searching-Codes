#include<stdio.h>
int RecursiveBsearch(int A[], int start, int end, int element) {
   if(start>end) return -1;
      int mid = (start+end)/2;
   if( A[mid] == element ) return mid;
   else if( element < A[mid] )
      RecursiveBsearch(A, start, mid-1, element);
   else
      RecursiveBsearch(A, mid+1, end, element);
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
 
    pos =  RecursiveBsearch(arr, 0, n-1, value);
    printf("%d is found at Index %d \n",value,pos);
    return 0;
}
