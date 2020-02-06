
#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
void main()
{
	int m,n,res;
	printf("enter two numbers");
	scanf("%d%d",&m,&n);
	res=gcd(m,n);
	printf("gcd of %d and %d=%d",m,n,res);
}

	
	
