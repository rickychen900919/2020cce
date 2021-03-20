#include <stdio.h>
int fun(int n)
{
  int ans=0;
  for(int i=n;i>=1;i--){
     ans=(i-1)*i+ans;


  }


   return ans;



}
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d\n",fun(n));



}
