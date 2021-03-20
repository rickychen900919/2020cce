#include <stdio.h>
 int a[10000];
int main()
{
   for(int i=0;i<3;i++)
   {
      scanf("%d",&a[i]);
   }
     int max=a[0],min=a[0];
     for(int i=0;i<3;i++){
        if(min>a[i]) min=a[i];
        if(max<a[i]) max=a[i];
     }
        printf("%d\n",max-min);
}
