#include <stdio.h>

void changeValuePtr(int *pY ,int *pM)
{
	//swiching
	//pY ���� &year ���� ���� ����
	//pM ���� &month ���� ���� ����
	int tp;
	tp = *pY;
	*pY = *pM;
	*pM = tp;
}

void main()
{
	int year  = 9;
	int month = 2018;
	int *pYear = &year;
	int *pMonth = &month;
	
	printf("�Լ� ȣ�� �� >>> year:%d , month:%d\n", year, month);

	changeValuePtr(pYear,pMonth);

	printf("�Լ� ȣ�� �� >>> year: %d, month: %d\n",year, month);
}