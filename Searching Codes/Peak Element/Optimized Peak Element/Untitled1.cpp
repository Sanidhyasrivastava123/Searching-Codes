#include<stdio.h>
int Recursive(int a[],int low,int high,int e)
{
	int mid=(low+high)/2;
	if((mid==0 || a[mid-1]<=a[mid])&&(a[mid+1]<=a[mid] || mid==e-1))
	{
		return mid;
	}
	else if(mid>0 && a[mid-1]>a[mid])
	{
		return Recursive(a,low,mid-1,e);
	}
	else
	{
		return Recursive(a,mid+1,high,e);
	}
}
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
	pos=Recursive(arr,0,n-1,n);
	printf("%d %d",pos,arr[pos]);
	
}
	
