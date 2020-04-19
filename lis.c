#include<stdio.h>

int max(int *num1, int *num2) 
{
    return (*num1 > *num2 ) ? *num1 : *num2;
}
int lis( int arr[], int n )  
{  
	int lis[n]; 
		   
	lis[0] = 1;    
		  
	for (int i = 1; i < n; i++ )  
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ )   
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
				lis[i] = lis[j] + 1;  
	} 
	return max(lis, lis+n); 
}  

int main()  
{  
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The length of the longest subsequence of the given sequence is : %d",lis(a,n));
	
	return 0;

    
}
