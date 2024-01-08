#include<stdio.h>
int main()
{
	int a[10],i,j,n,k,temp;
	printf("enter no of elements: ");
	scanf("%d",&n);
	printf("enter elements into the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int cnt=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				cnt=cnt+1;	
			}	
		}
		for(i=0;i<n;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[k])
				{
					k=j;
				}
			}
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;		
		}
	}
	
}
