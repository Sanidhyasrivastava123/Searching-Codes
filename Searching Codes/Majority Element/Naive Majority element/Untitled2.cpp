#include<stdio.h>
int naivME(int A[],int e)
{
	int i;
	for(i=0;i<e;i++)
	{
		int element=A[i];
		int count=0;
		for(int j=0;j<e;j++)
		{
			if(A[j]==element)
			{
				count=count+1;
			}
		}
		if(count<e/2)
		{
			return -1;
		}
		else{
			return element;
		}
		
	}
}
int main()
{
	
	int n,elem,i;
	printf("No of elements \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	elem=naivME(arr,n);
	printf("\n%d",elem);
	
}
