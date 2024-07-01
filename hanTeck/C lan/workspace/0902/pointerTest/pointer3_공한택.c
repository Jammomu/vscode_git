#include <stdio.h>

void changeValuePtr(int *pY ,int *pM)
{
	//swiching
	//pY 에는 &year 값을 갖고 있음
	//pM 에는 &month 값을 갖고 있음
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
	
	printf("함수 호출 전 >>> year:%d , month:%d\n", year, month);

	changeValuePtr(pYear,pMonth);

	printf("함수 호출 후 >>> year: %d, month: %d\n",year, month);
}