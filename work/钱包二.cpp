#include<stdio.h>
#include<string.h>
char movement[10], wallet[10], sign[10], money[10];
int sum;
void error(int type)
{
	switch ( type )
	  {
	  	case 1:printf("��������ȷ����\n");break;
	  	case 2:printf("��������ȷ����\n");break;
	  	case 3:printf("������ֵ����0~10��\n");break;
	  	case 4:printf("��ֵ�ܺ�����0~99��Χ��\n");
	  }
}
int getValue()  
{
	if (!strcmp("��", money)) return 0;
	else if ( !strcmp("һ", money) ) return 1;
	else if ( !strcmp("��", money) ) return 2;
	else if ( !strcmp("��", money) ) return 3;
	else if ( !strcmp("��", money) ) return 4;
	else if ( !strcmp("��", money) ) return 5;
	else if ( !strcmp("��", money) ) return 6;
	else if ( !strcmp("��", money) ) return 7;
	else if ( !strcmp("��", money) ) return 8;
	else if ( !strcmp("��", money) ) return 9;
	else if ( !strcmp("ʮ", money) ) return 10;
	else error(3);
} 
void deal() 
{
	for (;;)
	  {
	  	scanf("%s", wallet);
	  	if ( !strcmp("Ǯ��", wallet) )   
	  	  {
	  	  	scanf("%s%s", sign, money);  
	  	  	if ( !strcmp("����", sign) )   
	  	  	  sum += getValue(); 
	  	  	else if ( !strcmp("����", sign) )
	  	  	  sum -= getValue();
	  	  	else
	  	  	  error(2);
		  }
		else if ( !strcmp("����", wallet) )
		  {
		  	scanf("%s", wallet);  break; 
		  } 
		else error(1); 
	  }
}
void output(int num)  
{
	char figure[10][4] = {"��", "һ", "��", "��", "��", "��", "��", "��", "��", "��"};
	printf("%s", figure[num]);
}
void outputPlus(int num)
{
	int tensPlace, onesPlace;
	tensPlace = num / 10;
	onesPlace = num % 10;
	if ( tensPlace != 1 )
	  output(tensPlace);
	printf("ʮ");
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
