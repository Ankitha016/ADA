#include<stdio.h>
#include<time.h>
void select(int a[],int n)
{
	int i,j,small,pos,temp,k;
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
	clock_t t; 
	t=clock();
	select(a,n); 
    	t = clock() - t; 
	 double time_taken = ((double)t)/CLOCKS_PER_SEC; 
    	printf("sort function took %f seconds to execute \n", time_taken); 
    	return 0;
}

