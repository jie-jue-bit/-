#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int a=0,b,c=0; 
srand(time(NULL));
b=rand()%100+1;
printf("欢迎参加猜数游戏\n");
while(a!=b){

printf("请输入一个数\n") ;
scanf("%d",&a);
if (a<b){printf("小了\n"); 
}
else if(a>b) {printf("大了\n"); 
} 
c++;
} 
printf("恭喜你%d次就猜对了",c);
return 0;


	
 } 
