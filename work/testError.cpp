#include<stdio.h>
#include<string.h>
char movement[10], wallet[10], sign[10], money[10];
int sum;
void error(int type)
{
	switch ( type )
	  {
	  	case 1:printf("请输入正确数据\n");break;
	  	case 2:printf("请输入正确符号\n");break;
	  	case 3:printf("输入数值须在0~10内\n");break;
	  	case 4:printf("数值总和须在0~99范围内\n");
	  }
}
int main() 
{
	int i;
	for (i = 1; i < 5; i++)
	  error(i);
	return 0;
}
