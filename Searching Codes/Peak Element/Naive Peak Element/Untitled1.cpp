#include<stdio.h>
int main()
{
	int n,pos,i;
	printf("Enter the no of element\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(n==1)
	{
		pos=0;
	}
	else if(n==2)
	{
		int x=(arr[0]>arr[1])?0:1;
		pos=x;
	}
	else
	{
		if(arr[0]>arr[1])
		{
			pos=0;
		}
		if(arr[n-1]>arr[n-2])
		{
			pos=n-2;
		}
		for(i=0;i<n-1;i++)
		{
			if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])
			{
				pos=i;
			}
		}
	}
	printf("%d",arr[pos]);
}
