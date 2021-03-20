#include <stdio.h>
int main()
{

   int N;
   scanf("%d",&N);

   int sum=0;
   int a[1000];
   for(int i=0;i<N;i++){
      scanf("%d",&a[i]);
      sum+=a[i];

      }

   float average;
   average=(float)sum/N;
   int  r=0;
   int  sumTop=0;
   for(int i=0;i<N;i++){
           if(a[i]>=average){
           sumTop+=a[i];
           r++;



          }


   }
   float averageTop;
   averageTop=(float)sumTop/r;
   printf("§¡¼Ð:%.1f\n",average);
   printf("«e¼Ð:%.1f\n",averageTop);



}
