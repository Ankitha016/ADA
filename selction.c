#include<stdio.h>
int main()
{
	int n,i,j,small,pos,temp;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			small=a[i];
			pos=i;
			if(a[j]<small)
			{
				small=a[j];
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				pos=j;
			}
		}
	}
	printf("sorted array");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
			
