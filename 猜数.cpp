#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int a=0,b,c=0; 
srand(time(NULL));
b=rand()%100+1;
printf("��ӭ�μӲ�����Ϸ\n");
while(a!=b){

printf("������һ����\n") ;
scanf("%d",&a);
if (a<b){printf("С��\n"); 
}
else if(a>b) {printf("����\n"); 
} 
c++;
} 
printf("��ϲ��%d�ξͲ¶���",c);
return 0;


	
 } 
