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
