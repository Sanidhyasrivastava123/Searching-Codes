#include<stdio.h>
int BStransition(int A[], int e)
{
	int l,h;
	l=0;
	h=e-1;
	int ans=-1;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(A[mid]==1)
		{
			ans=mid;
			h=mid-1;
		}
		else if(A[mid]==0)
		{
			ans=mid;
			l=mid+1;
		}
		return ans;
	}
}
int main()
{
	
	int n,pos,i;
	printf("No of elements \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	pos=BStransition(arr,n);
	printf("\n%d",pos);
	
}
