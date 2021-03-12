# 2020cce
## 第一題 找零錢
```c

#include <stdio.h>
int main()
{
 int a,b ,c ,d;
 scanf("%d",&a);
 b=a/50;
 c=a%50/5;
 d=a%50%5/1;
 printf("%d=50*%d+5*%d+1*%d\n",a,b,c,d);
}

## 第二題 因數個數

```c
#include <stdio.h>
int main()
{
 int a;
 scanf("%d",&a);
 
 int r = 0;
 
 for( int i = 1 ; i <= a ; i++ )
 {
  if( a % i == 0 )
  {
   r++;
  }
 }
 
 printf("%d\n",r);
}
## 第三題 找倍數
```c
#include <stdio.h>
int main()
{
 int n=10,r=0,a[10];
 for(int i=1;i<=n;i++){
 scanf("%d",&a[10]);
 if(a[10]%3==0) r++;
 }
 printf("%d\n",r);
}
```c

#include <stdio.h>
int main()
{
 int a,b ,c ,d;
 scanf("%d",&a);
 b=a/50;
 c=a%50/5;
 d=a%50%5/1;
 printf("%d=50*%d+5*%d+1*%d\n",a,b,c,d);
}

## 第四題 整數轉為等級
```c
#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 if(n> 90||n==90)printf("A\n");
 else if(n<90&&n>=80)printf("B\n");
 else if(n<80&&n>=60)printf("C\n");
 else  printf("F\n");
}

## 第五題 分式化簡
```c
#include <stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        for(int i=1;i<=b;i++){
            if(a%i==0 &&b%i==0)
            {
                temp=i;
            }
        }
    }
    if (b>a)
    {
        for(int i=1;i<=a;i++){
            if(a%i==0 &&b%i==0)
            {
                temp=i;
            }
        }
    }
    a=a/temp;
    b=b/temp;

    printf("%d\n%d",a ,b);

}
## 第六題 讀入整數反序列印 
```c
#include <stdio.h>
int a[1000];
int main()
{
 int N=0;
 for(int i=0; i<1000; i++){
  scanf("%d",&a[i]);
  if(a[i]==0){
   N=i;
   break;
  }
 }
 
 for(int i=N-1; i>=0;i--){
  printf("%d ",a[i]);
 }
 printf("\n");
}

## 第七題 A的B次方函數
```c
#include <stdio.h>
int MYPOWER (int a,int b)
{
 int ans=1;
 for(int i=b;i>=1;i--){
  ans=ans*a;
  }
  return ans;
 }


int main(void)
{
 int a,b;
 scanf("%d%d",&a,&b);
 printf("[%d]",MYPOWER(a,b));
 return 0;
}
## 第八題 漸增數列相加
```c
#include <stdio.h>
int main()
{
 int a, ans=0;
 scanf("%d",&a);
 for(int i=a;i>=1;i--){
  ans=(i-1)*i+ans;

  }
 
 printf("%d\n",ans);
}
## 第九題 判別正方形 
```c
#include <stdio.h>
int main()
{
 printf("Enter two numbers:  ");
 int a,b;
 scanf("%d%d",&a ,&b);
 if(a==b) printf("It is a square ");
 else printf("It is not a square ");
}

## 第十題 2進位轉10進位 
```c
#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int ans=0;
 ans=(n%10)*1;
 n=n/10;
 ans=(n%10)*2+ans;
 n=n/10;
 ans=(n%10)*4+ans;
 n=n/10;
 ans=(n%10)*8+ans;
 n=n/10;
 printf("%d\n",ans);
}

## 第十一題 均標與前標計算
```c
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
 float r=0;
 float sumTop=0;
 for(int i=0;i<N;i++){
  if(a[i]>=average){
   sumTop+=a[i];
   r++;
   }
  }
 float averageTop;
 averageTop=(float)sumTop/r;
 printf("均標:%.1f\n",average);
 printf("前標:%.1f\n",averageTop);
}
 

## 第十二題 計算陣列的平方值
```c
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

## 第十三題 大小寫轉換
```c
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


## 第十四題 計算幾週與幾天
```c
#include <stdio.h>
int main()
{
  int a,d,b;
  scanf("%d%d",&a);
  a=d/7;
  b=d%7;
  printf("%d %d\n",a,b);



}

## 第十五題 計程車資計算
```c
#include <stdio.h>
int main()
{
   int n;
   
   scanf("%d",&n);
   if(n<=2000) printf("100\n");
   else if(n%500==0) printf("%d\n",100+(n-2000)/500*5);
   else   printf("%d\n",100+(n-2000)/500*5+5);
   




}

## 第十六題 兩數間可被5整除的整數
```c
#include <stdio.h>
int main()
{
  
  int a,b,c; 
  scanf("%d%d",&a,&b);
  if(a>b){
    c=a;
    a=b;
    b=c;
  
  
  }
  
   
   
   
   for(int i=a;i<=b;i++){
       if(i%5==0) printf("%d\n",i);
   
   
   }  
   
   
   
   
   
}

## 第十七題 整數間最大距離
```c
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




