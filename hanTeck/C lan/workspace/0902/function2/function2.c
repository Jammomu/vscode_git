#include <stdio.h>

int changeData(int year)
{
	year = 2018;

	if(year>0)
		return year;
	return -1;
	
}

void main()
{
	int year =9; // ���ش� 2018�ε�??

	printf("(main)�Լ�>> ���� : %d\n", year);
	
	year=changeData(year);

	printf("(main)�Լ� >> ���� : %d\n",year);
}