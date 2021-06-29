#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the  elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j;
	int count=1;
	int res=0;
	for(j=0;j<n;j++)
	{
		if(arr[j]==arr[res])
		{
			count=count+1;
		}
		else{
			count=count-1;
		}
		if(count==0)
		{
			res=j;
			count=1;
		}
	}
	count=0;
	int k;
	for(k=0;k<n;k++)
	{
		if(arr[k]==arr[res])
		{
			count=count+1;
		}
	}
	if(count<(n/2))
	{
		printf("Not found");
	}
	else
	{
		printf("%d",arr[res]);
	}
}
