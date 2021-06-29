#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	int arr[n],sum=0;
	printf("Enter the elements :\n");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		sum=sum+arr[i];
	}
	int ts,elem;
    ts=n*(n+1)/2;
	
	elem=ts-sum;
	printf("The missing element is %d",elem);
	
}
