
#include<stdio.h>
#include<time.h>
int binary(int a[], int f, int l, int key)
{
	int mid=(f+l)/2;
	if(f>l)
		return -1;
	else if(a[mid]==key)
		return 1;
	else if(key>a[mid])
		return binary(a,mid+1,l,key);
	else
		return binary(a,f,mid-1,key);
	
	
}

int main()
{
	int key,n,ele;
	printf("Enter the array size and key");
	scanf("%d%d",&n,&key);
	int arr[n];
	printf("enter the elements of the array");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	clock_t t; 
	t=clock();
	ele=binary(arr,0,n,key);
	if(ele==1)
	{
		printf("element found");
	}
	
    	t = clock() - t; 
	 double time_taken = ((double)t)/CLOCKS_PER_SEC; 
    	printf("search function took %f seconds to execute \n", time_taken); 
    	return 0;
	
	
}
