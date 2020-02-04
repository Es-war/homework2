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
void output(int num)  
{
	char figure[10][4] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};
	printf("%s", figure[num]);
}
void outputPlus(int num)
{
	int tensPlace, onesPlace;
	tensPlace = num / 10;
	onesPlace = num % 10;
	if ( tensPlace != 1 )
	  output(tensPlace);
	printf("十");
	if ( onesPlace )
	  	output(onesPlace);
}
int main() 
{
	scanf("%d", &sum); 
	if (sum < 10) 
	  output(sum);  
	else if ( sum < 100 ) 
	  outputPlus(sum);
	else
	  error (4);
	return 0;
}
