#include <stdio.h>
 
int main()
{
  int n, a[1000], i, d, temp;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
 
  for (i = 1 ; i <= n - 1; i++) {
    d = i;
 
    while ( d > 0 && a[d-1] > a[d]) {
      temp= a[d];
      a[d]= a[d-1];
      a[d-1] = temp;
 
      d--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (i= 0;i <= n - 1; i++) {
    printf("%d\n", a[i]);
  }
 
  return 0;
}