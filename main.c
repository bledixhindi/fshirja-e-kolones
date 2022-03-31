#include <stdio.h>
int main()
{
	int m,n,i,j,x;
	printf("Shkruani permasat e matrices (m,n):\n");
	scanf("%d %d",&m,&n);

	int a[m][n];
	printf("\nShkruani elementet e matrices:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nShkruani vleren qe do te ruhet ne qelizen a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	 printf("Shkruani numrin e kolones qe doni te fshini:");
	 scanf("%d",&x);
	 
	 for(j=x;j<n-1;j++)
	 {
	 	for (i=0;i<m;i++)
		 {
		 	a[i][j]=a[i][j+1];
		 }
	 }
	 n--;
	  printf("vlera e reja:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	 
	 return 0;
	 
}
