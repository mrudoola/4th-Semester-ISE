#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void merge(int a[],int low,int mid,int high,int b[])
{
        int i=low,j=mid+1;k=1;
	   while(i<=mid && j<=high)
	   {
		if(a[i]<=a[j]);
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	   }
		while(i<=mid)
			b[k++]=a[i++];
		while(j<=high)
			b[k++]=a[j++];
		for(i=low;i<=high;i++)
			a[i]=b[i];
	   
}
		      
        void mergeSort(int a[],int low,int high,int b[])
        {
        int mid;
        if(low<high)
        {
                mid=(low+high)/2;
                mergeSort(a,low,mid,b);
                mergeSort(a,mid+1,high,b);
                merge(a,low,mid,high,b);
        }
}
void main()
{
        int n,x;
        printf("enter array size\n");
        scanf("%d",&n);
        int i,a[n],b[n];
        for(i=0; i<n; i++)
	   {
		x=rand()%1000;
		a[i]=x;
        }
        clock_t start=clock();
        mergesort(a,0,n-1,b);
        clock_t end=clock();
        float time=(float)(end-start)/CLOCKS_PER_SEC;
        printf("sorted array is \n");
        for(i=0; i<n; i++)
                printf("%d",a[i]);
        printf("time taken is = %f",time);
}