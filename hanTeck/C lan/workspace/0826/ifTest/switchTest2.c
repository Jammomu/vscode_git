#include <stdio.h>
/*
	switch ���� �Է�
*/
void main()
{
	//char pick=NULL;
	char pick = ' ';
	int num1=0, num2=0;
	int res = 0;
	
	// '+', '-', '*', '/'
	// ��Ģ���� �Է¹پ� �� ���� ��� ��� ����ϱ�
	
	printf("+ / - * �� �ϳ� ���� : ");
	scanf("%c", &pick);
	printf("�����Է�: ");
	scanf("%d %d", &num1, &num2);
	
	//���� switch �ϼ��ϱ�
	switch(pick)
	{
	case '*':
		res=num1*num2;
				break;
	case '/':
		res=num1/num2;
				break;
	case '+':
		res=num1+num2;
				break;
	case '-':
		res=num1-num2;	
				break;
	}
	printf("%d %c %d = %d\n", num1, pick, num2, res);
}