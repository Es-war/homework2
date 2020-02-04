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
void deal() 
{
	for (;;)
	  {
	  	scanf("%s", wallet);
	  	if ( !strcmp("钱包", wallet) )   
	  	  {
	  	  	scanf("%s%s", sign, money);  
	  	  	if ( !strcmp("增加", sign) )   
	  	  	  sum += getValue(); 
	  	  	else if ( !strcmp("减少", sign) )
	  	  	  sum -= getValue();
	  	  	else
	  	  	  error(2);
		  }
		else if ( !strcmp("看看", wallet) )
		  {
		  	scanf("%s", wallet);  break; 
		  } 
		else error(1); 
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
	scanf("%s%s%s%s", movement, wallet, sign, money); 
	sum = getValue();  
	deal();   
	if (sum < 10) 
	  output(sum);  
	else if ( sum < 100 ) 
	  outputPlus(sum);
	else
	  error (4);
	return 0;
}
