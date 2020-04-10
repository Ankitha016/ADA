/* Find Minimum Cost Spanning Tree of a given undirected graph using Prim’s algorithm. */

#include<stdio.h>


int a[30][30],visited[30],n,small=0,c=0;

void prim(int v)
{
	
	int indi,indj;	
	visited[v]=1;
	int min=10000000;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(visited[i]==1 && visited[j]==0)
			{
				if(a[i][j]<min)
				{
					min=a[i][j];
					indi=i;
					indj=j;
				}
			}
		}
	}
	
	small=small+a[indi][indj];
	printf("%d to %d  %d\n",indi,indj,a[indi][indj]);
	c++;
	visited[indj]=1;
	if(c==n-1)
		return;
	prim(indj);
}

int main()
{
	
	printf("Enter the no. of vertices");
	scanf("%d",&n);
	printf("Enter the weighted matrix ( enter 9999 if no edge exist)");
	for(int i=1;i<=n;i++)
	{
		visited[i]=0;
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("Minimum spanning tree is");
	printf("Edges \t Weight");
	prim(1);
	printf("Minimum cost =%d ",small);
	return 0;
}

