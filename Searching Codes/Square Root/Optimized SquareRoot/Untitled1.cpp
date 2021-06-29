#include<stdio.h>
int squareroot(int x)
{
	int start=1;
	int end=x;
	int ans=-1;
	while(start<end)
	{
		int mid=(start+end)/2;
		int sqr=mid*mid;
		if(sqr==x)
		{
			return mid;
		}
		else if(sqr<x)
		{
			ans=mid;
			start=mid+1;
		}
		else
		{
			ans=mid;
			end=mid-1;
		}
	}
	return ans;

}
int main()
{
	int n,root;
	printf("Enter the element: \n");
	scanf("%d", &n);
	root=squareroot(n);
	printf("\nThe root is = %d",root);
	
}
