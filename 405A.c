#include <stdio.h>
#include <string.h>
int main()
{
   int n;
   scanf("%d",&n);
   int i,j,a[n],temp;
   for (i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }

   for (i=0;i<n;i++)
   {
       for (j=i+1;j<n;j++)
       {
           if (a[i]>a[j])
           {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
       }
   }

   for (i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }


    return 0;
}
