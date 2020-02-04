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
int getValue()  
{
	if (!strcmp("零", money)) return 0;
	else if ( !strcmp("一", money) ) return 1;
	else if ( !strcmp("二", money) ) return 2;
	else if ( !strcmp("三", money) ) return 3;
	else if ( !strcmp("四", money) ) return 4;
	else if ( !strcmp("五", money) ) return 5;
	else if ( !strcmp("六", money) ) return 6;
	else if ( !strcmp("七", money) ) return 7;
	else if ( !strcmp("八", money) ) return 8;
	else if ( !strcmp("九", money) ) return 9;
	else if ( !strcmp("十", money) ) return 10;
	else error(3);
} 
int main() 
{
	for (int i = 0; i<12; i++)
	  {
	  	scanf("%s", money); 
	    sum = getValue();  
	    printf("%d\n", sum);
	  }
	return 0;
}
