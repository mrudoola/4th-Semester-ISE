#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int n,x,i,temp,j;
  	printf("Enter number of elements\n");
  	scanf("%d", &n);
        int a[n];
	for (i = 0; i < n; i++)
	{
		x=rand()%1000;
		a[i]=x;
	}	
    	clock_t start = clock();
 	for (i = 0 ; i < n - 1; i++)
  	{
    		for (j= 0 ; j < n - i - 1; j++)
    {
      if (a[j+1] > a[j]) /* For decreasing order use < */
      {
        temp = a[j+1];
        a[j+1] = a[j];
        a[j] = temp;
      }
    }
  }
	clock_t end = clock();
	double total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("\n Sorted array is:");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n Total time taken:%f",total);
}
 	
  
