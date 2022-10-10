#include <stdio.h>
int main()
{
	int i,j,a[100],n,sum=0,temp,maxval=0,maxcount=0,mode,k=0,count=0;
	float mean,median;
	printf("Enter no:of elements in array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
		sum=sum+a[i];
	mean=(float)sum/(float)n;
	printf("Mean of given data: %f\n",mean);
	for (i=0;i<n;i++)
		{
		for (j=0;j<n-1-i;j++)
			{
			if (a[j]>a[j+1])
				{
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;
				}
			}
		}
	if(n%2==0)
		median=((a[n/2]+a[(n/2)-1])/2);
	else
		median=a[(n-1)/2];
	printf("Median of given data : %f\n",median);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if (a[i]==a[j])
				count++;
		}
		if (count>maxcount)
		{
			maxcount=count;
			maxval=a[i];
		}
	}
	mode=maxval;
	printf("Mode of given data= %d",mode);
	
		return 0;
 }
			
			
			
			
			
			

