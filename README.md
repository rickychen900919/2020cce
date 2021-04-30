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
```
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
 ```
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
```
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
```
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
```
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
```
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

```
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
```
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
```
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
```
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
 
```
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
```
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

```
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
```
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
```
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
```
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
```

## week03-1
```c
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p = & a[2];
    *p = 222;
    p = p+2;
    *p = 666;
}
```
## week03-2
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printall()
{
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p = & a[2];
    *p = 222;
            printAll();
    p = p+2;
    *p = 666;
            printAll();
    p--;
    *p = 555;
            printAll();
}

```
## week03-3
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printall()
{
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printAll();
    int *p = & a[2];
    *p = 222;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
    p = p+2;
    *p = 666;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
    p--;
    *p = 555;
            printAll();
            printf("p心裡小紙條記的值是:%d\n", p);
}
```
## week03-4
```C
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p= (int*) malloc(sizeof(int)*10);
    return 0;
}


```
## week04-1
```c
#include <stdio.h>

struct POINT{

       float x,y;

};


int main()
{
    struct POINT a;
}
```


## week04-2
```c
#include <stdio.h>

struct POINT{

       float x,y;

};


int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
    return 0;
}


```
## week04-3
```c
include <stdio.h>

struct POINT{

       float x,y;

};


int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
    
    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
    
    
    
    
    
    
    return 0;
}






```
## week04-4
```c
#include <stdio.h>

struct DATA{

 int  x,y;

}   a[3];

struct DATA b={100,200};

int main()
{
    for(int i=0;i<3;i++){
        printf("a[%d]:%d %d\n",i,a[i].x,a[i].y);
    }

    printf("b :%d %d\n",b.x,b.y);


    struct DATA c;
    printf("c: %d %d像亂碼\n",c.x,c.y);

    c=b;
    printf("c :%d %d\n",c.x,c.y);


}

```
## week04-5
```c
   #include <stdio.h>
struct POINT{
  float x,y,z;
};

struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};



int main()
{

 struct POINT*p = & point [0];
 printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

 p++;
 printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

 p++;
 printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);



}
```
##  week05-1
```c
#include <stdio.h>
int main()
{
   char line[5][10]={"deline", "proper","majority","bullet","shop"};
   for(int i=0;i<5;i++){
    char*p;
       p=line[i];
       printf("%s\n",line[i]);



   }






}
```
## week05-2
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char line[10] ="majority";
    char line2[10] ="ask" ;
    if(strcmp(line,line2)>0){
        printf("左邊大\n");



    }  else{


        printf("右邊大\n");

    }










}

```
## week05-3
```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
		}
		char temp[10];
		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
				if( strcmp(line[i],line[j])>0){
					strcpy(temp,line[i]);
					strcpy(line[i],line[j]);
					strcpy(line[j],temp);
			}
		}
	}
	
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}
}

```
## week05-4
```c
#include <stdio.h>
int main()
{
   char line [10]="decline";
   char line2[10]={'p','r','o','p','e','r','\0'};

   printf("%s\n",line);
   printf("%s\n",line2);

   char line3[]="majority";
   printf("%s\n", line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("你看看你看看,現在印出來的line4: ==%s==\n", line4);







}

```
## week-05-5
```c
#include <stdio.h>
int f(int n)
{
   int p;
   int m=0;
   
   while (n>0)
   {
     p=n%10;
     n=n/10;
     m=p+m*10;
   
   
   }
 
     return m;


}



int main()
{
   int n,m;
   scanf("%d",&n);
   printf("%d+%d=%d\n",n,f(m),n+f(m));






}
```
## week05-6
```c
#include <stdio.h>
int f(int a)
{
  if(a>0)
  return a;
  else return a*(-1);

}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}

```
## week05-7
```c
#include <stdio.h>
int a[10];
int main()
{

    int N,n,sum=0;
   	scanf("%d",&a[10]);
   	for(int i=0;i<a[10];i++){
   	   scanf("%d",&n);
   	   sum=sum+n; 
   	
   	}
   	
     printf("%d\n",sum);

}
```
## week05-8
```c
#include <stdio.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a>b&&a>c) printf("%d",a);
   else if(b>a&&b>c) printf("%d",b);
   else printf("%d",c);

    printf("\n");
 
}
```
## week05-9
```c
#include <stdio.h>
int main()
{

   int a,b;
   scanf("%d%d",&a,&b);
   printf("%d\n",a/b);
   





}
```
## WEEK-5-10字串
```C
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
		}
		char temp[10];
		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
				if( strcmp(line[i],line[j])>0){
					strcpy(temp,line[i]);
					strcpy(line[i],line[j]);
					strcpy(line[j],temp);
			}
		}
	}
	
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}
}
```
## week 07-1
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char temp[10];

int compare( const void*p1,const void*p2)
{

    char *s1=(char*)p1;
    char *s2=(char*)p2;
    return strcmp(s1,s2);


}



int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%s",line[i]);
    }


      qsort(line, n, 10,compare );
      
      
      for(int i=0;i<n;i++){
         printf("%s\n",line[i]);
      
      }





}
```
## week10-1
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[1000];
char tree[1000000] [32];
int compare( const void *p1, const void*p2){
	return strcmp( (char*)p1,(char*) p2);
}
int main()
{
	int T;
	scanf("%d\n\n", &T);
	
	for(int t=0; t<T; t++){
	int N=0;
	while( gets(line)!=NULL ){
		if(strcmp (line,"")==0 )break;
		
		strcpy( tree[N], line);
		
			N++;
		}

		qsort( tree,N,32,compare);
		
		
		if(t>0) printf("\n");
		int ans=1;
		printf("%s ",tree[0] );
		
		for(int i=0;i<N-1;i++){
			if( strcmp(tree[i],tree[i+1])==0){
				ans++;
			}else{
				printf("%.4f\n",100*ans/(float)N);
				ans=1;
				printf("%s ", tree[i+1 ]);
			}
		}
                printf("%.4f\n",100*ans/(float)N);
	}
}


