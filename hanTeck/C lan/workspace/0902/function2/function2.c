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
	int year =9; // 올해는 2018인데??

	printf("(main)함수>> 올해 : %d\n", year);
	
	year=changeData(year);

	printf("(main)함수 >> 올해 : %d\n",year);
}