#include<stdio.h>
void rotate(int a[],int n,char d,int cr)
	{
	int temp[100],i,j=0;
	if (d=='l')
	{
		for (i=cr;i<n;i++)
		{
			temp[j]=a[i];j++;}
		for (i=0;i<cr;i++)
		{
			temp[j]=a[i];j++;}
	}
	else if (d=='r')
	{	
		for (i=n-cr;i<n;i++)
		{
			temp[j]=a[i];j++;}
		for (i=0;i<n-cr;i++)
		{
			temp[j]=a[i];j++;}
	}
	for (i=0;i<n;i++)
		printf("%d\t",temp[i]);
	}
void main()
	{
	int a[100],n,i,cr;
	char d;
	printf("Enter 'l' for rotation to left & 'r' for rotation to right\n");
	scanf("%c",&d);
	printf("Enter no:of elements in the array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);}
	printf("Enter no:of times to be rotated\n");
	scanf("%d",&cr);
	rotate(a,n,d,cr);
	}
	
			
		
	 
