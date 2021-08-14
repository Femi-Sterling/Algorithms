#include<stdio.h>
void main()
{
	int a[20],i,n,x,flag=0;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element:\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}	
	}
	if(flag==1)
	{
		printf("The search element %d is found at index %d",x,i);
	}
	else
	{
		printf("Search element is not found.");
	}
}
