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
int main() 
{
	int i;
	for (i = 1; i < 5; i++)
	  error(i);
	return 0;
}
