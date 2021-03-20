#include <stdio.h>
int main()
{

   char a[11];
   scanf("%s",&a);
   for(int i=0;i<11;i++){
      if('A'<=a[i]&&a[i]<='Z') printf("%c",a[i]+32);
      else if('a'<=a[i]&&a[i]<='z') printf("%c",a[i]-32);
      else if('0'<=a[i]&&a[i]<='9') printf("%c",a[i]);
      else if(a[i]==NULL) break;



   }

     printf("\n");


}
