#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int n,x,i,j;
	printf("Enter the array size;");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		x=rand()%1000;
		a[i]=x;
	}
	clock_t start = clock();
	for(i=0;i<n;i++)
	{
		int min=j;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
		}
	int temp = a[min];
	a[min] = a[i];
	a[i] = temp;
	}
	clock_t end = clock();
	double total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("\n Sorted array is:");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n Total time taken:%f",total);
}