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
	scanf("%d", &sum); 
	if (sum < 10) 
	  output(sum);  
	else if ( sum < 100 ) 
	  outputPlus(sum);
	else
	  error (4);
	return 0;
}
