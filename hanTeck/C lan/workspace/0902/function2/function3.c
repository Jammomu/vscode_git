#include <stdio.h>

int changeValue(int y, int m)
{
	//y���� 9�� �Ѿ��, m���� monthdml 2018�� ��� �ִ�.
	//�켱 y�� m�� ���� ���� �ٲ�� �Ѵ�.(swicth)

	//??? �ٲ㺸��~!
	int t;
	t = y;
	y = m;
	m = t;
	printf("(change�Լ�) y:%d , m:%d\n)", y, m);

	//return y, m; �ѹ��� �ΰ��� �ҷ����� ���Ѵ�. 
}
 
void main()
{
	int year =9;
	int month=2018;

	printf("year:%d , month:%d\n", year, month);

	changeValue(year,month);

	printf("year: %d, month: %d\n",year, month);
}