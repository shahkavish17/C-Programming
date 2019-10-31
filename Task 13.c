#include <stdio.h>
int main()
{
    int i, n;
    float a[100],large,small;
    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");
    for(i = 0; i < n; i++)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &a[i]);
    }
    large=small=a[0];    
    for(i = 1; i < n; i++)
    {
      if(a[i]>large)
			large=a[i];
	  if(a[i]<small)
	     	small=a[i];
    }
    printf("Largest element = %.2f", large);
    printf("\nSmallest element = %.2f", small);
    return 0;
}
