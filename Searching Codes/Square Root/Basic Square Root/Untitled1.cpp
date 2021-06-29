#include<stdio.h>
int squareroot(int x)
{
	int i=1;
	while(i*i<=x)
	{
		i++;
	}
	return(i-1);
}
int main()
{
	int n,root;
	printf("Enter the element: \n");
	scanf("%d", &n);
	root=squareroot(n);
	printf("\nThe root is = %d",root);
	
}

